use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let total_cost: u32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		match total_cost {
			0..=1000 => println!("{}.00", total_cost),
			_ => println!("{:.2}", total_cost as f64 * 0.9)
		}
	}
}