use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let mut numbers = line.split_whitespace();
		let N: u8 = numbers.next().unwrap().parse().unwrap();
		let M: u32 = numbers.next().unwrap().parse().unwrap();
		match M % N as u32 {
			0 => println!("Yes"),
			_ => println!("No")
		}
	}
}