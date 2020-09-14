use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
	for _ in 0..T {
		let Year: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
		match Year % 4 {
			0 => match Year % 100 {
				0 => match Year % 400 {
					0 => println!("Yes"),
					_ => println!("No")
				}
				_ => println!("Yes")
			},
			_ => println!("No")
		}
	}
}