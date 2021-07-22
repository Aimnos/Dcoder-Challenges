use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	lines.take(T as usize).map(|N| N.unwrap().trim().parse::<u8>().unwrap()).for_each(|N| println!("{}", N as u32 * (N as u32 + 1) * (2 * N as u32 + 1) / 6));
}