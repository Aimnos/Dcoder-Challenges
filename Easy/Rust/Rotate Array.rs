use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let line = lines.next().unwrap().unwrap();
	let mut integers = line.split_whitespace();
	let N: u32 = integers.next().unwrap().parse().unwrap();
	let K: u32 = integers.next().unwrap().parse().unwrap();
	let mut Arr: Vec<u32> = lines.next().unwrap().unwrap().split_whitespace().map(|i| i.parse().unwrap()).collect();
	Arr.rotate_right(K as usize);
	print!("{}", Arr.remove(0));
	for integer in Arr {
		print!(" {}", integer);
	}
}