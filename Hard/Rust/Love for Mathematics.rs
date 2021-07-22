use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	let XY = lines.take(N as usize).map(|line| {
		let line = line.unwrap();
		let mut values = line.split_whitespace();
		(values.next().unwrap().parse::<u64>().unwrap(), values.next().unwrap().parse::<u64>().unwrap())
	}).collect::<Vec<_>>();
	let mut students: u16 = 0;
	let mut books: u64 = 0;
	for (X, _) in &XY {
		let happy = XY.iter().filter(|(x, y)| x <= X && X <= y).count() as u16;
		if happy > students || (happy == students && *X < books) {
			students = happy;
			books = *X;
		}
	}
	print!("{} {}", books, students);
}