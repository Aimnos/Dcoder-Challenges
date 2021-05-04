use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut vowels: u16 = 0;
	for character in buf.trim().to_lowercase().chars() {
		match character {
			'a' | 'e' | 'i' | 'o' | 'u' => vowels += 1,
			_ => continue
		}
	}
	print!("{}", vowels);
}