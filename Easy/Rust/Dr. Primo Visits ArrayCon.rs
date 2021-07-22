use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let A: Vec<u32> = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|i| i.parse().unwrap())
        .collect();
    print!("{}", A.iter().filter(|&&i| is_prime(i)).count());
}

fn is_prime(x: u32) -> bool {
    match x {
        0 | 1 => return false,
        2 | 3 => return true,
        a if a % 2 == 0 || a % 3 == 0 => return false,
        _ => {
            let mut i = 5;
            while i * i <= x {
                match x {
                    a if a % i == 0 || a % (i + 2) == 0 => return false,
                    _ => i += 6,
                }
            }
        }
    }
    true
}
