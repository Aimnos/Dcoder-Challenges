use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let N = lines.next().unwrap().unwrap();
		let mut chars = N.trim().chars();
		println!("{}", chars.next().unwrap().to_digit(10).unwrap() + chars.last().unwrap().to_digit(10).unwrap());
	}
}