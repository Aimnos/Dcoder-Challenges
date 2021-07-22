use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let N: u16 = buf.trim().parse().unwrap();
    if (N / 100).pow(3) + ((N / 10) % 10).pow(3) + (N % 10).pow(3) == N {
        print!("YES");
    } else {
        print!("NO");
    }
}
