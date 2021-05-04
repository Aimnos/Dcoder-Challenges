use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	for character in buf.trim().chars() {
		match character.is_uppercase() {
			true => print!("{}", character.to_lowercase()),
			false => print!("{}", character.to_uppercase())
		}
	}
}