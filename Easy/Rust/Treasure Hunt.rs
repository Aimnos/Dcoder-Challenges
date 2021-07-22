use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let maxW: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let line1 = lines.next().unwrap().unwrap();
    let mut numbers1 = line1.split_whitespace();
    let value1: u16 = numbers1.next().unwrap().parse().unwrap();
    let weight1: u16 = numbers1.next().unwrap().parse().unwrap();
    let line2 = lines.next().unwrap().unwrap();
    let mut numbers2 = line2.split_whitespace();
    let value2: u16 = numbers2.next().unwrap().parse().unwrap();
    let weight2: u16 = numbers2.next().unwrap().parse().unwrap();
    match maxW < weight1 + weight2 {
        false => print!("{}", value1 + value2),
        true => match maxW < weight1 {
            false => match value1 < value2 {
                false => print!("{}", value1),
                true => match maxW < weight2 {
                    false => print!("{}", value2),
                    true => print!("{}", value1),
                },
            },
            true => match maxW < weight2 {
                false => print!("{}", value2),
                true => print!("0"),
            },
        },
    }
}
