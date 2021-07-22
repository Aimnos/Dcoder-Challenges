use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..T {
        let n: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
        let A = n / 2;
        println!("{} {}", A, n - A)
    }
}
