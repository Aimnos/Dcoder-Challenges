use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut integers = buf.split_whitespace();
	let a: u8 = integers.next().unwrap().parse().unwrap();
	let b: u8 = integers.next().unwrap().parse().unwrap();
	match a + b > 21 {
		false => print!("{}", a + b),
		true => match a == 11 || b == 11 {
			false => print!("0"),
			true => print!("{}", a + b - 10)
		}
	}
}