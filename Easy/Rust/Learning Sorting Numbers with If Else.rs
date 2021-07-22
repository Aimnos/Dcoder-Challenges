use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut integers = buf.split_whitespace();
    let m: u16 = integers.next().unwrap().parse().unwrap();
    let n: u16 = integers.next().unwrap().parse().unwrap();
    let p: u16 = integers.next().unwrap().parse().unwrap();
    match m < n {
        true => match n < p {
            true => print!("{} {} {}", m, n, p),
            false => match m < p {
                true => print!("{} {} {}", m, p, n),
                false => print!("{} {} {}", p, m, n),
            },
        },
        false => match m < p {
            true => print!("{} {} {}", n, m, p),
            false => match n < p {
                true => print!("{} {} {}", n, p, m),
                false => print!("{} {} {}", p, n, m),
            },
        },
    }
}
