use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let n: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let sequence: Vec<u32> = lines.next().unwrap().unwrap().split_whitespace().map(|e| e.parse().unwrap()).collect();
	let mut subsequence = longest_increasing_subsequence(&sequence, n);
	print!("{}", subsequence.remove(0));
	for number in subsequence {
		print!(" {}", number);
	}
}

fn longest_increasing_subsequence(v: &Vec<u32>, size: u16) -> Vec<u32> {
	let mut indexes = Vec::with_capacity(size as usize);
	let mut prev = Vec::with_capacity(size as usize);
	for i in (0..size as usize).rev() {
		let best = indexes.len();
		let mut lower = 0;
		let mut upper = best;
		while lower < upper {
			let mid = (lower + upper) / 2;
			match v.get(*indexes.get(mid).unwrap()) < v.get(i) {
				true => upper = mid,
				false => lower = mid + 1
			}
		}
		indexes.push(i);
		match lower {
			0 => prev.push(0),
			_ => prev.push(*indexes.get(lower - 1).unwrap())
		}
		if lower < best {
			indexes.swap_remove(lower);
		}
	}
	prev.reverse();
	let best = indexes.len();
	let mut subsequence = Vec::with_capacity(best);
	let mut k = *indexes.last().unwrap();
	for _ in 0..best {
		subsequence.push(*v.get(k).unwrap());
		k = *prev.get(k).unwrap();
	}
	subsequence
}