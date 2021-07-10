use std::{io::{self, BufRead}, collections::HashSet};

fn main() {
	let stdin = io::stdin();
	let lines = &mut stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let N = line.trim();
		let L: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		println!("{}", search_for_substring(N, &lines.map(|line| line.unwrap().trim().to_owned()).take(L as usize).collect::<HashSet<String>>(), 0));
	}
}

fn search_for_substring(string: &str, words: &HashSet<String>, first: u8) -> u8 {
	let mut highest = first;
	for word in words {
		if string.starts_with(word) {
			let count = search_for_substring(string.split_at(word.len()).1, words, first + 1);
			if count > highest {
				highest = count;
			}
		}
	}
	if string.len() > 0 && highest == first {
		highest -= 1;
	}
	highest
}