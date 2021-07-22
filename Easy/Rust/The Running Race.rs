use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.split_whitespace();
    let D: u8 = buf.next().unwrap().parse().unwrap();
    let X: u8 = buf.next().unwrap().parse().unwrap();
    let Y: u8 = buf.next().unwrap().parse().unwrap();
    match X > Y {
        true => print!("Alex"),
        false => match X < Y {
            true => print!("Ryan"),
            false => print!("Draw"),
        },
    };
}
