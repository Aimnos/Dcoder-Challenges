use std::io;
use std::collections::HashSet;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut uniques = HashSet::new();
	for character in buf.trim().chars().collect::<Vec<char>>() {
		if uniques.insert(character) {
			print!("{}", character)
		}
	}
}