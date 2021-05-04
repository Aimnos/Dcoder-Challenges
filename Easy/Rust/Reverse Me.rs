use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	print!("{}", buf.trim().chars().rev().collect::<String>().parse::<u16>().unwrap());
}