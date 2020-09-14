use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let mut strings = line.split_whitespace();
		let N = strings.next().unwrap();
		let F = strings.next().unwrap();
		match N.contains(F) {
			true => println!("Yes"),
			false => println!("No")
		}
	}
}