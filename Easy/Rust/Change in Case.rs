use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let string = lines.next().unwrap().unwrap();
    let line = lines.next().unwrap().unwrap();
    let mut numbers = line.split_whitespace();
    let x: u8 = numbers.next().unwrap().parse().unwrap();
    let y: u8 = numbers.next().unwrap().parse().unwrap();
    for (i, c) in string.trim().chars().enumerate() {
        match i as u8 == x || i as u8 == y {
            true => match c.is_lowercase() {
                true => print!("{}", c.to_uppercase()),
                false => print!("{}", c.to_lowercase()),
            },
            false => print!("{}", c),
        }
    }
}
