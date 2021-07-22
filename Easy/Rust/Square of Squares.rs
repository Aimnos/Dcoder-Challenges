use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let integer: i32 = buf.trim().parse().unwrap();
    if ((integer as f32).abs().sqrt() as i32).pow(2) == integer {
        print!("YES");
    } else {
        print!("NO");
    }
}
