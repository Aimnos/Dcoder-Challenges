use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut integers = buf.split_whitespace();
    let A = (integers.next().unwrap().parse::<i8>().unwrap() as i16).pow(2) as u16
        + (integers.next().unwrap().parse::<i8>().unwrap() as i16).pow(2) as u16;
    let B = (integers.next().unwrap().parse::<i8>().unwrap() as i16).pow(2) as u16
        + (integers.next().unwrap().parse::<i8>().unwrap() as i16).pow(2) as u16;
    match A < B {
        true => print!("A"),
        false => print!("B"),
    }
}
