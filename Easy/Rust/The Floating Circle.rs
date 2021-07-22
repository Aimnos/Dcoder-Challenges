use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let r: f32 = buf.trim().parse().unwrap();
    if r > 0.0 {
        print!("{:.2}", 3.14 * r.powi(2));
    } else {
        print!("0");
    }
}
