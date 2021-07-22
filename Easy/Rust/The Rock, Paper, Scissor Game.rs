use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let n: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let pairs = lines.next().unwrap().unwrap();
    let mut characters = pairs.chars();
    for _ in 0..n {
        match characters.next().unwrap() {
            'R' => match characters.next().unwrap() {
                'R' => println!("Draw"),
                'P' => println!("You"),
                'S' => println!("Dcoder"),
                _ => unreachable!(),
            },
            'P' => match characters.next().unwrap() {
                'R' => println!("Dcoder"),
                'P' => println!("Draw"),
                'S' => println!("You"),
                _ => unreachable!(),
            },
            'S' => match characters.next().unwrap() {
                'R' => println!("You"),
                'P' => println!("Dcoder"),
                'S' => println!("Draw"),
                _ => unreachable!(),
            },
            _ => unreachable!(),
        }
    }
}
