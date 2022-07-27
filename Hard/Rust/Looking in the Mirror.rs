use std::{
    cell::RefCell,
    io::{self, BufRead},
    rc::Rc,
};

struct Tree {
    root: Rc<RefCell<Node>>
}

struct Node {
    value: i16,
    left: Option<Rc<RefCell<Node>>>,
    right: Option<Rc<RefCell<Node>>>
}

enum NodeChild {
    Left,
    Right
}

impl Tree {
    fn new(value: i16) -> Self {
        Tree {
            root: Rc::from(RefCell::from(Node {
                value: value,
                left: None,
                right: None
            }))
        }
    }

    fn find(&self, value: i16) -> Option<Rc<RefCell<Node>>> {
        if self.root.borrow().value == value {
            return Some(self.root.clone());
        }
        self.root.borrow().find(value).0
    }

    fn mirror(&self, value: i16) -> Option<Rc<RefCell<Node>>> {
        if self.root.borrow().value == value {
            return Some(self.root.clone());
        }
        let mut path = self.root.borrow().find(value).1;
        let mut node = self.root.clone();
        let mut child;
        while !path.is_empty() {
            match path.remove(0) {
                NodeChild::Left => {
                    if let Some(ref r) = node.borrow().right {
                        child = r.clone();
                    } else {
                        return None;
                    }
                },
                NodeChild::Right => {
                    if let Some(ref l) = node.borrow().left {
                        child = l.clone();
                    } else {
                        return None;
                    }
                }
            }
            node = child.clone();
        }
        Some(node)
    }
}

impl Node {
    fn add_child(&mut self, value: i16, side: NodeChild) {
        match side {
            NodeChild::Left => self.left = Some(Rc::from(RefCell::from(Node {
                value: value,
                left: None,
                right: None
            }))),
            NodeChild::Right => self.right = Some(Rc::from(RefCell::from(Node {
                value: value,
                left: None,
                right: None
            })))
        }
    }

    fn find(&self, value: i16) -> (Option<Rc<RefCell<Node>>>, Vec<NodeChild>) {
        let mut v = Vec::new();
        if let Some(ref l) = self.left {
            v.push(NodeChild::Left);
            if l.borrow().value == value {
                return (Some(l.clone()), v);
            }
            let result = l.borrow().find(value);
            if result.0.is_some() {
                v.extend(result.1);
                return (result.0, v);
            }
            v.pop();
        }
        if let Some(ref r) = self.right {
            v.push(NodeChild::Right);
            if r.borrow().value == value {
                return (Some(r.clone()), v);
            }
            let result = r.borrow().find(value);
            if result.0.is_some() {
                v.extend(result.1);
                return (result.0, v);
            }
            v.pop();
        }
        (None, v)
    }
}

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let line = lines.next().unwrap().unwrap();
    let mut values = line.split_whitespace();
    let N: u16 = values.next().unwrap().parse().unwrap();
    let Q: u16 = values.next().unwrap().parse().unwrap();
    let X: i16 = values.next().unwrap().parse().unwrap();
    let x = Tree::new(X);
    for line in lines.by_ref().take(N as usize) {
        let line = line.unwrap();
        let mut values = line.split_whitespace();
        let parent = x.find(values.next().unwrap().parse::<i16>().unwrap()).unwrap();
        let child: i16 = values.next().unwrap().parse().unwrap();
        let side = match values.next().unwrap().parse::<char>().unwrap() {
            'L' => NodeChild::Left,
            'R' => NodeChild::Right,
            _ => panic!()
        };
        parent.borrow_mut().add_child(child, side);
    }
    for line in lines.take(Q as usize) {
        let t = x.mirror(line.unwrap().trim().parse::<i16>().unwrap());
        match t {
            Some(t) => println!("{}", t.borrow().value),
            None => println!("Not Exist")
        }
    }
}
