use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let words = lines.next().unwrap().unwrap();
    for (i, word) in words.split_whitespace().enumerate() {
        match word {
            "Nemo" => {
                print!("{}", i + 1);
                break;
            }
            _ => continue,
        }
    }
}
