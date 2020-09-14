use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let mut A: Vec<u16> = lines.next().unwrap().unwrap().split_whitespace().map(|i| i.parse().unwrap()).collect();
	print!("{}", A.pop().unwrap());
	A.reverse();
	for i in A {
		print!(" {}", i);
	}
}