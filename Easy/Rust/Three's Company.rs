use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let line = lines.next().unwrap().unwrap();
	let string = line.trim();
	for c in string.chars() {
		print!("{}{}{}", c, c, c);
	}
}