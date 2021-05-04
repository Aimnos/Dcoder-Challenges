use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	for i in 1..=buf.trim().parse::<u8>().unwrap() {
		for j in 1..i {
			print!("{} ", j);
		}
		println!("{}", i);
	}
}