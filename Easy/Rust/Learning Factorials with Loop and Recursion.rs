use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let n: u8 = buf.trim().parse().unwrap();
    match n {
        0 | 1 => print!("1"),
        _ => {
            let mut factorial = 1;
            for x in 2..=n as u32 {
                factorial *= x;
            }
            print!("{}", factorial);
        }
    }
}
