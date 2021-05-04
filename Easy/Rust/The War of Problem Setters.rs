use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let Garry: u8 = lines.next().unwrap().unwrap().split_whitespace().fold(0, |acc, points| acc + points.parse::<u8>().unwrap());
	let Sharry: u8 = lines.next().unwrap().unwrap().split_whitespace().fold(0, |acc, points| acc + points.parse::<u8>().unwrap());
	match Garry > Sharry {
		true => print!("Garry {}", Garry - Sharry),
		false => match Garry < Sharry {
			true => print!("Sharry {}", Sharry - Garry),
			false => print!("None 0")
		}
	}
}