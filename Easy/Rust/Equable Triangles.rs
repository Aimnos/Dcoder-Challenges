use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let n: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..n {
		let line = lines.next().unwrap().unwrap();
		let mut sides = line.split_whitespace();
		let a: f64 = sides.next().unwrap().parse().unwrap();
		let b: f64 = sides.next().unwrap().parse().unwrap();
		let c: f64 = sides.next().unwrap().parse().unwrap();
		let cos = (b.powi(2) + c.powi(2) - a.powi(2)) / (2.0 * b * c);
		let sin = (1.0 - cos.powi(2)).sqrt();
		match (b * c * sin / 2.0 - a - b - c).abs() < 1e-13 {
			true => println!("True"),
			false => println!("False")
		}
	}
}