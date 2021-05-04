use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let x: u16 = buf.trim().parse().unwrap();
	print!("{}", x % 7);
}