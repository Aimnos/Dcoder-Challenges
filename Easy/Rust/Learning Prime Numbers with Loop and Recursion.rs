use std::collections::HashSet;
use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut integers = buf.split_whitespace();
    let m: u32 = integers.next().unwrap().parse().unwrap();
    let n: u32 = integers.next().unwrap().parse().unwrap();
    let mut primes = HashSet::new();
    for x in 2..=n {
        if primes.insert(x) && x >= m {
            println!("{}", x);
        }
        for i in 2..=(n as f32 / x as f32).ceil() as u32 {
            primes.insert(x * i);
        }
    }
}
