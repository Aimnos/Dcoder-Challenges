use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let N: u8 = buf.trim().parse().unwrap();
	let alphabet = "abcdefghijklmnopqrstuvwxyz";
	print!("{}", alphabet[0..N as usize].chars().rev().collect::<String>());
}