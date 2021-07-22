use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mean = (buf
        .split_whitespace()
        .map(|marks| marks.parse::<u8>().unwrap())
        .fold(0, |acc, marks| acc + marks as u16)
        / 3) as u8;
    match mean {
        91..=100 => print!("A"),
        81..=90 => print!("B"),
        71..=80 => print!("C"),
        61..=70 => print!("D"),
        0..=60 => print!("F"),
        _ => unreachable!(),
    }
}
