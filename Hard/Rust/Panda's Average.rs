use std::io::{self, BufRead};
use std::f64;

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		let mut A: Vec<i16> = lines.next().unwrap().unwrap().split_whitespace().map(|i| i.parse().unwrap()).collect();
		match N {
			0..=1 => println!("NO"),
			_ => {
				let mut best = f64::INFINITY;
				for i in 1..N {
					let slice = A.split_off(i as usize);
					let right = slice.iter().fold(0, |acc, &num| acc + num);
					let left = A.iter().fold(0, |acc, &num| acc + num);
					A.extend(slice);
					let difference = (left as f64 / i as f64 - right as f64 / (N - i) as f64).abs();
					if difference < best {
						best = difference;
					}
				}
				println!("{:.2}", best);
			}
		}
	}
}