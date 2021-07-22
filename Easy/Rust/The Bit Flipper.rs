use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    for character in buf.trim().chars() {
        match character {
            '0' => print!("1"),
            '1' => print!("0"),
            _ => unreachable!(),
        }
    }
}
