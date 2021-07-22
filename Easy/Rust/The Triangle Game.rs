use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let input = buf.trim();
    for i in 1..=input.len() {
        println!("{}", input[0..i].to_owned());
    }
}
