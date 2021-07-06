use std::{io::{self, BufRead}, collections::HashSet};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let N = line.trim();
		let L: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		let mut words = HashSet::with_capacity(L as usize);
		for _ in 0..L {
			let line = lines.next().unwrap().unwrap();
			words.insert(String::from(line.trim()));
		}
		let mut highest: u8 = 0;
		for word in &words {
			let mut count: u8 = 0;
			if N.starts_with(word.as_str()) {
				count += 1;
				search_for_substring(N.split_at(word.len()).1, &words, &mut count);
				if count > highest {
					highest = count;
				}
			}
		}
		println!("{}", highest);
	}
}

fn search_for_substring(string: &str, words: &HashSet<String>, count: &mut u8) {
	let first = *count;
	let mut highest = *count;
	for word in words {
		*count = first;
		if string.starts_with(word) {
			*count += 1;
			search_for_substring(string.split_at(word.len()).1, words, count);
			if *count > highest {
				highest = *count;
			}
		}
	}
	if string.len() > 0 && highest == first {
		highest -= 1;
	}
	*count = highest;
}