use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let mut matrix: Vec<u8> = vec![0; N as usize - 1];
	for i in 0..N as usize - 1 {
		let line = lines.next().unwrap().unwrap();
		let mut elements = &mut line.split_whitespace();
		if !matrix.iter().rev().take(i).zip(elements.map(|element| element.parse::<u8>().unwrap())).all(|(&a, b)| a == b){
			print!("NO");
			return;
		}
		elements.next();
		matrix.splice(i..N as usize - 1, elements.map(|element| element.parse::<u8>().unwrap()).rev());
	}
	print!("YES");
}