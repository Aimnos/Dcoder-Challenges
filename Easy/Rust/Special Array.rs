use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let array: Vec<u8> = lines.next().unwrap().unwrap().split_whitespace().map(|element| element.parse().unwrap()).collect();
	match array.contains(&0) {
		true => print!("No"),
		false => print!("Yes")
	}
}