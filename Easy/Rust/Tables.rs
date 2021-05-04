use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let n: u16 = buf.trim().parse().unwrap();
	for i in 1..=10 {
		println!("{}", n as u32 * i)
	}
}