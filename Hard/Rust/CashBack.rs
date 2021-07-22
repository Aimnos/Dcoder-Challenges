use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let CiXi: Vec<(u32, u32)> = lines.take(N as usize).map(|line| {
		let line = line.unwrap();
		let mut values = line.split_whitespace();
		(values.next().unwrap().parse::<u32>().unwrap(), values.next().unwrap().parse::<u32>().unwrap())
	}).collect::<Vec<_>>();
	let lowest = CiXi.iter().min().unwrap();
	let highest = CiXi
}