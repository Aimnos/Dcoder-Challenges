use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let mut A: Vec<i16> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|i| i.parse().unwrap())
        .collect();
    A.sort_by(|a, b| b.cmp(a));
    print!("{}", A.remove(0));
    for number in A.iter() {
        print!(" {}", number);
    }
}
