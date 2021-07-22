use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let n: u8 = buf.trim().parse().unwrap();
    print!("{}", n as u16 * (n - 1) as u16)
}
