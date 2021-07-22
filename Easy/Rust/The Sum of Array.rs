use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    print!(
        "{}",
        lines
            .next()
            .unwrap()
            .unwrap()
            .split_whitespace()
            .fold(0, |acc, element| acc
                + element.parse::<u8>().unwrap() as u16)
    );
}
