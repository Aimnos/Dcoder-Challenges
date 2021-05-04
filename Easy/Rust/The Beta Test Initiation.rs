use std::io;

fn main() {
	let mut buf = String::new();
	io::stdin().read_line(&mut buf).unwrap();
	let mut buf = buf.split_whitespace();
	let V: f32 = buf.next().unwrap().parse().unwrap();
	let X: f32 = buf.next().unwrap().parse().unwrap();
	match X < V {
		true => print!("No"),
		false => print!("Yes")
	}
}