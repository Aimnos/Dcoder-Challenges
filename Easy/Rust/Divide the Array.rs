use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let Array: Vec<u32> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|element| element.parse().unwrap())
        .collect();
    for i in 0..N as usize / 2 {
        let element = *Array.get(2 * i + 1).unwrap();
        match element % 2 {
            0 => print!("{} ", element),
            _ => continue,
        }
    }
}
