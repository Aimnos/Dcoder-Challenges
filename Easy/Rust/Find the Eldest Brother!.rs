use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let ages: Vec<u8> = buf
        .split_whitespace()
        .map(|age| age.parse().unwrap())
        .collect();
    print!("{}", ages.iter().max().unwrap())
}
