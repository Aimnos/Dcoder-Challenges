use std::io;

fn main() {
	let mut T = String::new();
	io::stdin().read_line(&mut T).unwrap();
	let T: u16 = T.trim_end().parse().unwrap();
	for _ in 0..T {
		let mut N = String::new();
		io::stdin().read_line(&mut N).unwrap();
		let N: u16 = N.trim_end().parse().unwrap();
		let mut A = String::new();
		io::stdin().read_line(&mut A).unwrap();
		let mut A: Vec<u16> = A.split_whitespace().map(|s| s.parse().unwrap()).collect();
		if A.len() % 2 == 0 || A.iter().fold(0, |acc, x| acc ^ x) == 0 {
			println!("Sherlock");
		} else  {
			println!("Watson");
		}
	}
}