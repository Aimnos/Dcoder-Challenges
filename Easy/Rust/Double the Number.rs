use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T = lines.next().unwrap().unwrap().trim().parse::<u8>().unwrap();
    for _ in 0..T {
        let line = lines.next().unwrap().unwrap();
        let mut values = line.split_whitespace();
        let N = values.next().unwrap().parse::<u8>().unwrap();
        let K = values.next().unwrap().parse::<u8>().unwrap();
        println!(
            "{}",
            lines
                .next()
                .unwrap()
                .unwrap()
                .split_whitespace()
                .take(usize::from(N))
                .map(|i| i.parse::<u8>().unwrap())
                .filter(|i| K == 2 * i)
                .count()
        );
    }
}
