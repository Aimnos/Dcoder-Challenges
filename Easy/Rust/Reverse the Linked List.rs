use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut list: Vec<i8> = buf.split_whitespace().map(|element| element.parse().unwrap()).collect();
	list.reverse();
	list.remove(0);
	print!("{}", list.remove(0));
	for element in list.iter() {
		print!(" {}", element);
	}
}