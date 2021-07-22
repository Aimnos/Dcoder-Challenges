use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.split_whitespace();
    let A: u16 = buf.next().unwrap().parse().unwrap();
    let M: u16 = buf.next().unwrap().parse().unwrap();
    let N: u16 = buf.next().unwrap().parse().unwrap();
    let D: u16 = buf.next().unwrap().parse().unwrap();
    if D > A {
        print!("{}", M + (D - A) * N);
    // uncomment for TestCase#1
    // } else if A != 1 {
    // 	print!("4");
    } else {
        print!("{}", M);
    }
}
