use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let X: f64 = buf.trim().parse().unwrap();
	println!("{} {}", X.ceil() as u8, X.floor() as u8);
}