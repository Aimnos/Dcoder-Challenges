use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut count: u16 = 0;
	let mut digit: u8 = 0;
	for character in buf.trim().chars() {
		let next = character.to_digit(2).unwrap() as u8;
		if next == digit {
			count += 1;
		} else {
			digit = next;
			count = 1;
		}
		if count >= 6 {
			print!("Bad");
			std::process::exit(0);
		}
	}
	print!("Good");
}