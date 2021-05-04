use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let n: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let mut array: Vec<u16> = lines.next().unwrap().unwrap().split_whitespace().map(|element| element.parse().unwrap()).collect();
	let average = array.iter().fold(0, |acc, &x| acc + x as u32) as f32 / array.len() as f32;
	if average.fract() > 0.5 {
		print!("{}", average.ceil());
	} else {
		print!("{}", average.floor());
	}
}