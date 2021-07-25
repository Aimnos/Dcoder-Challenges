use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let (C, X): (Vec<_>, Vec<_>) = lines
        .take(N as usize)
        .map(|line| {
            let line = line.unwrap();
            let mut values = line.split_whitespace();
            (
                values.next().unwrap().parse::<u32>().unwrap(),
                values.next().unwrap().parse::<u32>().unwrap(),
            )
        })
        .unzip();
    let highest = *C.iter().max().unwrap();
    let M = C
        .into_iter()
        .fold(*X.iter().min().unwrap(), |acc, ci| acc + ci) as u64
        - X.into_iter().fold(0, |acc, xi| acc + xi) as u64;
    if M > highest as u64 {
        print!("{}", M);
    } else {
        print!("{}", highest);
    }
}
