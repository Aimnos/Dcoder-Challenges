use std::io;

fn main() {
	let mut S = String::new();
	io::stdin().read_line(&mut S).unwrap();
	let mut letters: Vec<char> = S.trim().to_lowercase().chars().collect();
	letters.sort();
	letters.dedup();
	match letters.len() {
		26 => print!("YES"),
		_ => print!("NO")
	}
}