use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    for character in buf.trim().chars() {
        print!("{}", (character as u8 + 1) as char);
    }
}
