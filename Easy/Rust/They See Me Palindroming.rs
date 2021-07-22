use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let S = buf.trim();
    match S == S.chars().rev().collect::<String>().as_str() {
        true => print!("Yes"),
        false => print!("No"),
    }
}
