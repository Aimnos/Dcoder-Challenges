use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut line = buf.split_whitespace();
	let A = line.next().unwrap();
	match A.contains(line.next().unwrap()) {
		true => print!("1"),
		false => print!("0")
	}
}