use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let Array: Vec<u16> = lines.next().unwrap().unwrap().split_whitespace().map(|element| element.parse().unwrap()).collect();
	print!("{}", Array.iter().max().unwrap() - Array.iter().min().unwrap());
}