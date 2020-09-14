use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let N: u8 = buf.trim().parse().unwrap();
	for i in 1..=N {
		for j in 1..i {
			print!("{} ", j);
		}
		println!("{}", i);
	}
}