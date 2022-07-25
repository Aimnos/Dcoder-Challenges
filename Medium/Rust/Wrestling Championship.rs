use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T = lines.next().unwrap().unwrap().trim().parse::<u8>().unwrap();
    lines
        .take(usize::from(T))
        .for_each(|line| println!("{}", line.unwrap().trim().parse::<u32>().unwrap() - 1));
}
