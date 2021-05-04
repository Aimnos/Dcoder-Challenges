use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut numbers = buf.trim().split_whitespace();
	let mut sum = 0;
	for x in numbers.next().unwrap().parse::<u8>().unwrap()..=numbers.next().unwrap().parse::<u8>().unwrap() {
		// TestCase#3 has an answer bigger than 65535
		sum += (x as u32).pow(2);
	}
	print!("{}", sum);
}