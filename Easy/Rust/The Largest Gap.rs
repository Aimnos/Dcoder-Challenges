use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    // Even though the problem states that the maximum value for any element is 10000, using u16 fails for TestCase#1 and TestCase#2
    let Array: Vec<u32> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .take(N as usize)
        .map(|element| element.parse().unwrap())
        .collect();
    print!(
        "{}",
        Array.iter().max().unwrap() - Array.iter().min().unwrap()
    );
}
