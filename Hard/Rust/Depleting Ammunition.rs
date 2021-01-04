use std::io::{self, BufRead};

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();
	let line = lines.next().unwrap().unwrap();
	let mut integers = line.split_whitespace();
	let n: u32 = integers.next().unwrap().parse().unwrap();
	let k: u32 = integers.next().unwrap().parse().unwrap();
	let mut buildings: Vec<u32> = lines.next().unwrap().unwrap().split_whitespace().map(|x| x.parse().unwrap()).collect();
	buildings.sort();
	buildings.dedup();
	let mut bombs: u8 = 1;
	let mut target = buildings.iter();
	let mut low = *target.next().unwrap();
	let mut drop = low;
	while let Some(&building) = target.next() {
		match building > low + k {
			true => if building > drop + k {
				low = building;
				drop = building;
				bombs += 1;
			},
			false => drop = building
		}
	}
	print!("{}", bombs);
}