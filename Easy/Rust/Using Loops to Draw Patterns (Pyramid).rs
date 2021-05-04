fn main() {
	for i in 0..5 {
		for _ in i..4 {
			print!(" ");
		}
		for _ in 0..i {
			print!("**");
		}
		println!("*")
	}
}