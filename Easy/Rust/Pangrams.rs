use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut S: Vec<char> = buf.trim().to_lowercase().chars().collect();
    S.sort();
    S.dedup();
    match S.len() {
        26 => print!("YES"),
        _ => print!("NO"),
    }
}
