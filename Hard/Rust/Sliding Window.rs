use std::io;

fn main() {
	let mut T = String::new();
	io::stdin().read_line(&mut T).unwrap();
	let T: u16 = T.trim_end().parse().unwrap();
	for _ in 0..T {
		let mut line = String::new();
		io::stdin().read_line(&mut line).unwrap();
		let line: Vec<u16> = line.split_whitespace().map(|s| s.parse().unwrap()).collect();
		let N = *line.get(0).unwrap();
		let K = *line.get(1).unwrap();
		let mut trees = String::new();
		io::stdin().read_line(&mut trees).unwrap();
		let trees: Vec<i32> = trees.split_whitespace().map(|s| s.parse().unwrap()).collect();
		for i in 0..N - K + 1 {
			let mut seen: Vec<i32> = Vec::new();
			let mut distinct = 0;
			for j in 0..K {
				let tree = trees.get(usize::from(i + j)).unwrap();
				if !seen.contains(tree) {
					seen.push(*tree);
					distinct += 1;
				}
			}
			if i > 0 {
				print!(" ");
			}
			print!("{}", distinct);
		}
		println!("");
	}
}