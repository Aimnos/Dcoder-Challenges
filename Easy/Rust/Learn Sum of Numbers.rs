use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	print!("{}", buf.split_whitespace().fold(0, |acc, number| acc + number.parse::<u16>().unwrap()));
}