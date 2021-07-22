use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let N: u8 = buf.trim().parse().unwrap();
    match N {
        1 => print!("1st"),
        2 => print!("2nd"),
        3 => print!("3rd"),
        _ => print!("{}th", N),
    }
}
