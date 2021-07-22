use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let n: u8 = buf.trim().parse().unwrap();
    print!("Dc");
    for _ in 0..n {
        print!("o");
    }
    print!("der");
}
