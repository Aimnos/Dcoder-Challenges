use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..T {
        let line = lines.next().unwrap().unwrap();
        let mut Marks = line.split_whitespace();
        let Mathematics: u8 = Marks.next().unwrap().parse().unwrap();
        let Algorithms: u8 = Marks.next().unwrap().parse().unwrap();
        match Mathematics {
            0..=70 => println!("Fail"),
            _ => match Algorithms {
                0..=50 => println!("Fail"),
                _ => println!("Pass"),
            },
        }
    }
}
