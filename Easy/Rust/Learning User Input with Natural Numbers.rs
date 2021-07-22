use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let N: u16 = buf.trim().parse().unwrap();
    print!("{}", N as u32 * (N + 1) as u32 / 2);
}
