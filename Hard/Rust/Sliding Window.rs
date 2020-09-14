use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let mut blocks = line.split_whitespace();
		// Even though the problem states that N and K are at most 100, using u8 fails for TestCase#1 and TestCase#2
		let N: u16 = blocks.next().unwrap().parse().unwrap();
		let K: u16 = blocks.next().unwrap().parse().unwrap();
		// All tree values are between 0 and 255
		let trees: Vec<u8> = lines.next().unwrap().unwrap().split_whitespace().map(|tree| tree.parse().unwrap()).collect();
		for i in 0..=N - K {
			let mut seen = vec![0; K as usize];
			seen.copy_from_slice(&trees[i as usize..(i + K) as usize]);
			seen.sort();
			seen.dedup();
			let distinct = seen.len();
			if i > 0 {
				print!(" ");
			}
			print!("{}", distinct);
		}
		println!("");
	}
}