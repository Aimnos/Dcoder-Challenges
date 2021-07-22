use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let string = buf.trim();
    for character in string.split_at(string.len() / 2).0.chars() {
        print!("{}", character);
    }
}
