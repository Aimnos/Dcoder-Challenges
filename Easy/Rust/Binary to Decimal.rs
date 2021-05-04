use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	print!("{}", u8::from_str_radix(buf.trim(), 2).unwrap());
}