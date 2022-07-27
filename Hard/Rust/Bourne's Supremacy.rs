use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let T: u8 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..T {
        let N: u16 = lines.next().unwrap().unwrap().trim().parse().unwrap();
        let arr: Vec<u16> = lines
            .next()
            .unwrap()
            .unwrap()
            .split_whitespace()
            .map(|i| i.parse().unwrap())
            .collect();
        let line = lines.next().unwrap().unwrap();
        let mut locations = line.split_whitespace().take(2);
        let mut location = locations.next().unwrap().parse().unwrap();
        let destination = locations.next().unwrap().parse().unwrap();
        let mut can_reach = false;
        for _ in 0..N {
            if location == destination {
                can_reach = true;
                break;
            }
            location = arr[location as usize - 1];
        }
        match can_reach {
            true => println!("Yes"),
            false => println!("No"),
        }
    }
}
