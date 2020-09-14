use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let N: u32 = buf.trim().parse().unwrap();
	print!("{}", N / 3);
}