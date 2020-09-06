use std::io;

fn main() {
	let mut n = String::new();
	io::stdin().read_line(&mut n).unwrap();
	let n: u16 = n.trim_end().parse().unwrap();
	let mut sequence = String::new();
	io::stdin().read_line(&mut sequence).unwrap();
	let sequence: Vec<u32> = sequence.split_whitespace().map(|e| e.parse().unwrap()).collect();
	let mut sequence = longest_increasing_subsequence(&sequence, n);
	let first = sequence.remove(0).to_string();
	print!("{}", sequence.iter().fold(first, |acc, num| acc + " " + &num.to_string()));
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
			if v.get(*indexes.get(mid).unwrap()) < v.get(i) {
				upper = mid;
			} else {
				lower = mid + 1;
			}
		}
		indexes.push(i);
		if lower > 0 {
			prev.push(*indexes.get(lower - 1).unwrap());
		} else {
			prev.push(0);
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