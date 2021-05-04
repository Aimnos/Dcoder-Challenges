use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let K: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		let mut digits: Vec<u8> = lines.next().unwrap().unwrap().split_whitespace().map(|digit| digit.parse().unwrap()).collect();
		digits.sort(|a, b| b.cmp(a));
		for digit in digits {
			print!("{}", digit);
		}
		println!("");
	}
}