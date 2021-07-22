use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let words = lines.next().unwrap().unwrap();
    let mut numbers = Vec::with_capacity(N as usize);
    for c in words.chars() {
        if c.is_digit(10) {
            numbers.push(c.to_digit(10).unwrap());
        }
    }
    print!("{}", numbers.remove(0));
    for number in numbers {
        print!(" {}", number);
    }
}
