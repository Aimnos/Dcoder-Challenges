use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let n: i16 = buf.trim().parse().unwrap();
	let mut power_of_two: f32 = 1.0;
	if n < 0 {
		print!("1.0");
		for _ in n..0 {
			power_of_two /= 2.0;
			print!(",{}", power_of_two);
		}
	} else {
		print!("1");
		for _ in 0..n {
			power_of_two *= 2.0;
			print!(",{:.0}", power_of_two);
		}
	}
}