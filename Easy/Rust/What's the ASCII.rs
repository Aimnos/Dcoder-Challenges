use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let character: char = buf.trim().parse().unwrap();
	print!("{}", character as u8);
}