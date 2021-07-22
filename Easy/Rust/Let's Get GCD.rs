use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let mut n1: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let mut n2: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    if n1 < n2 {
        n1 ^= n2;
        n2 ^= n1;
        n1 ^= n2;
    }
    while n2 > 0 {
        let aux = n1 % n2;
        n1 = n2;
        n2 = aux;
    }
    print!("{}", n1);
}
