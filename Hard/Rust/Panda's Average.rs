use std::io;

fn main() {
	let mut T = String::new();
	io::stdin().read_line(&mut T).unwrap();

	let T = T.trim_end().parse().unwrap();
	for _ in 0..T {
		let mut N = String::new();
		io::stdin().read_line(&mut N).unwrap();

		let N: u16 = N.trim_end().parse().unwrap();
		let mut A = String::new();
		io::stdin().read_line(&mut A).unwrap();
		let mut A: Vec<i32> = A.split_whitespace().map(|s| s.parse().unwrap()).collect();

		if N < 2 {
			println!("NO");
		} else {
			let mut best = -1.0;

			for i in 1..N {
				let mut left = 0;
				let mut right = 0;
	
				for j in 0..i {
					left += A.get(usize::from(j)).unwrap();
				}
				for j in i..N {
					right += A.get(usize::from(j)).unwrap();
				}
				let difference = (f64::from(left) / f64::from(i) - f64::from(right) / f64::from(N - i)).abs();
				if difference < best || best == -1.0 {
					best = difference;
				}
			}
			println!("{:.2}", best);
		}
	}
}