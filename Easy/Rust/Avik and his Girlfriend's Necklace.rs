use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let mut necklace: Vec<u8> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|pearl| pearl.parse().unwrap())
        .collect();
    necklace.sort();
    print!("{}", necklace.remove(0));
    for pearl in necklace {
        print!(" {}", pearl);
    }
}
