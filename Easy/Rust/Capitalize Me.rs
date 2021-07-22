use std::io;

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();
    let mut capitalize = true;
    for character in buf.trim().chars() {
        match character {
            ' ' => {
                print!(" ");
                capitalize = true;
            }
            _ => match capitalize {
                true => {
                    print!("{}", character.to_uppercase());
                    capitalize = false;
                }
                false => print!("{}", character),
            },
        }
    }
}
