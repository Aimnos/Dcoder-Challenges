use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut numbers = buf.split_whitespace();
	let N: u8 = numbers.next().unwrap().parse().unwrap();
	let X: u8 = numbers.next().unwrap().parse().unwrap();
	print!("{}", (N / 2 + X) % N)
}