use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let s = lines.next().unwrap().unwrap();
		println!("{}", s.trim().to_uppercase());
	}
}