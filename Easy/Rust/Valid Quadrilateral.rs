use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let angles: Vec<u16> = lines.next().unwrap().unwrap().split_whitespace().map(|angle| angle.parse().unwrap()).collect();
		match angles.iter().fold(0, |acc, angle| acc + angle) {
			360 => println!("YES"),
			_ => println!("NO")
		}
	}
}