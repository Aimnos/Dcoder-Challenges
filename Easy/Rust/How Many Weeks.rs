use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	print!("{}", 10000 / buf.trim().parse::<u16>().unwrap());
}