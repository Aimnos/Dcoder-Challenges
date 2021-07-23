use std::{
    io::{self, BufRead},
    iter::once,
};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let CiXi: Vec<_> = lines
        .take(N as usize)
        .map(|line| {
            let line = line.unwrap();
            let mut values = line.split_whitespace();
            (
                values.next().unwrap().parse::<u32>().unwrap(),
                values.next().unwrap().parse::<u32>().unwrap(),
            )
        })
        .flat_map(|tup| once(tup.0).chain(once(tup.1)))
        .collect();
    let M = CiXi
        .iter()
        .step_by(2)
        .fold(*CiXi.iter().skip(1).step_by(2).min().unwrap(), |acc, ci| {
            acc + ci
        }) as u64
        - CiXi.iter().skip(1).step_by(2).fold(0, |acc, xi| acc + xi) as u64;
    let highest = *CiXi.iter().step_by(2).max().unwrap();
    if M > highest as u64 {
        print!("{}", M);
    } else {
        print!("{}", highest);
    }
}
