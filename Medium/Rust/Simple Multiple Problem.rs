use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let line = lines.next().unwrap().unwrap();
		let mut integers = line.split_whitespace();
		let N: u32 = integers.next().unwrap().parse().unwrap();
		let M: u32 = integers.next().unwrap().parse().unwrap();
		let mut n1 = N;
		let mut n2 = M;
		if n2 > n1 {
			n1 ^= n2;
			n2 ^= n1;
			n1 ^= n2;
		}
		while n2 > 0 {
			let aux = n1 % n2;
			n1 = n2;
			n2 = aux;
		}
		println!("{}", M / n1);
	}
}