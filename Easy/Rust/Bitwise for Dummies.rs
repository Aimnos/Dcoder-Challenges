use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let line = lines.next().unwrap().unwrap();
    let mut values = line.split_whitespace();
    let a = values.next().unwrap().parse::<u8>().unwrap();
    let b = values.next().unwrap().parse::<u8>().unwrap();
    let p = values.next().unwrap().parse::<u8>().unwrap();
    let q = values.next().unwrap().parse::<u8>().unwrap();
    let x = values.next().unwrap().parse::<u8>().unwrap();
    print!(
        "{}\n{}\n{}\n{}\n{}\n{}",
        a & b,
        a | b,
        a ^ b,
        u16::from(p) << q,
        p >> q,
        !i16::from(x)
    );
}
