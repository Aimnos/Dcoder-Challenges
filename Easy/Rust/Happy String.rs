use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let N: u8 = buf.trim().parse().unwrap();
	let mut letter = ('a' as u8 + N) as char;
	while letter > 'a' as u8 {
		letter = (letter as u8 - 1) as char;
		print!("{}", letter);
	}
}