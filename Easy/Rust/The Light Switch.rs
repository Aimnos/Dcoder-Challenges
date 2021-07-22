use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    print!(
        "{}",
        buf.split_whitespace()
            .fold(0, |acc, bit| acc ^ bit.parse::<u8>().unwrap())
    );
}
