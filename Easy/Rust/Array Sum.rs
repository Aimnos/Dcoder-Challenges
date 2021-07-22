use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let n: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let A: Vec<u16> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|i| i.parse().unwrap())
        .collect();
    let max = A.iter().max().unwrap();
    print!("{}", A.iter().fold(0, |acc, i| acc + i) % max);
}
