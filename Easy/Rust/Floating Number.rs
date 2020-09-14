use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let N: f64 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		println!("{:.2}", N);
	}
}