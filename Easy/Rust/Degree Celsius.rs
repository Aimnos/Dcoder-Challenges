use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let T: u16 = buf.trim().parse().unwrap();
    print!("{}", 18 * T / 10 + 32);
}
