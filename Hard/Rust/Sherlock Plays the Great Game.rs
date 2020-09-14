use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		let mut A: Vec<u16> = lines.next().unwrap().unwrap().split_whitespace().map(|i| i.parse().unwrap()).collect();
		match N % 2 {
			0 => println!("Sherlock"),
			_ => match A.iter().fold(0, |acc, x| acc ^ x) {
				0 => println!("Sherlock"),
				_ => println!("Watson")
			}
		}
	}
}