use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut integers = buf.split_whitespace();
	let a: i8 = integers.next().unwrap().parse().unwrap();
	let b: i8 = integers.next().unwrap().parse().unwrap();
	match a + b {
		6 => print!("Love"),
		_ => match (a - b).abs() {
			6 => print!("Love"),
			_ => print!("Hate")
		}
	}
}