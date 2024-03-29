use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..T {
        println!(
            "{:.2}",
            lines
                .next()
                .unwrap()
                .unwrap()
                .trim()
                .parse::<f32>()
                .unwrap()
        );
    }
}
