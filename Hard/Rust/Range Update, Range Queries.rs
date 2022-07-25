use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let first_line = lines.next().unwrap().unwrap();
    let mut values = first_line.split_whitespace();
    let N = values.next().unwrap().parse::<u16>().unwrap();
    let Q = values.next().unwrap().parse::<u16>().unwrap();
    let mut A = lines
        .next()
        .unwrap()
        .unwrap()
        .split_whitespace()
        .map(|elem| elem.parse::<u16>().unwrap())
        .fold(Vec::with_capacity(usize::from(N)), |mut A, elem| {
            A.push(elem);
            return A;
        });
    lines.take(usize::from(Q)).for_each(|line| {
        let line = line.unwrap();
        let mut query = line.split_whitespace();
        let q = query.next().unwrap().parse::<u8>().unwrap();
        let l = query.next().unwrap().parse::<u16>().unwrap() - 1;
        let r = query.next().unwrap().parse::<u16>().unwrap() - 1;
        match q {
            1 => println!(
                "{}",
                A.iter()
                    .skip(usize::from(l))
                    .take(usize::from(r - l))
                    .min()
                    .unwrap()
            ),
            2 => {
                let p = query.next().unwrap().parse::<u16>().unwrap();
                A.iter_mut()
                    .skip(usize::from(l))
                    .take(usize::from(r - l))
                    .for_each(|elem| *elem += p)
            }
            _ => unreachable!(),
        }
    });
}
