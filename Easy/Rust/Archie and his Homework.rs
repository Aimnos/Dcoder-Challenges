use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut buf = buf.split_whitespace();
	let N: u16 = buf.next().unwrap().parse().unwrap();
	let D: u16 = buf.next().unwrap().parse().unwrap();
	let (mut x, mut y) = (D, N);
	while y > 0 {
		x %= y;
		y ^= x;
		x ^= y;
		y ^= x;
	}
	print!("{} {}", N / x, D / x);
}