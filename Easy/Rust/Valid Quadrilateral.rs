use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		match lines.next().unwrap().unwrap().split_whitespace().map(|angle| angle.parse::<u8>().unwrap()).fold(0, |acc, angle| acc + angle as u16) {
			360 => println!("YES"),
			_ => println!("NO")
		}
	}
}