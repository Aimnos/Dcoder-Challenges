use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.split_whitespace();
    let l: u16 = buf.next().unwrap().parse().unwrap();
    let h: u16 = buf.next().unwrap().parse().unwrap();
    let d: u16 = buf.next().unwrap().parse().unwrap();
    let mut divisors: u16 = 0;
    let mut number = l;
    while number <= h {
        if number % d == 0 {
            break;
        }
        number += 1;
    }
    while number <= h {
        divisors += 1;
        number += d;
    }
    print!("{}", divisors);
}
