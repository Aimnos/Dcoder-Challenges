use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..T {
        println!("{}", lines.next().unwrap().unwrap().trim().to_uppercase());
    }
}
