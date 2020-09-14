use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let A: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		match A % 2 {
			0 => println!("No"),
			_ => println!("Yes")
		}
	}
}