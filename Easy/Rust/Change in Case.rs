use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let string = lines.next().unwrap().unwrap();
	let line = lines.next().unwrap().unwrap();
	let mut numbers = line.split_whitespace();
	let x: u8 = numbers.next().unwrap().parse().unwrap();
	let y: u8 = numbers.next().unwrap().parse().unwrap();
	for (i, c) in string.trim().chars().enumerate() {
		match i {
			a if a == x as usize || a == y as usize => match c.is_ascii_lowercase() {
				true => print!("{}", c.to_ascii_uppercase()),
				false => print!("{}", c.to_ascii_lowercase())
			},
			_ => print!("{}", c)
		}
	}
}