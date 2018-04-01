use std::io;
use std::time::SystemTime;

fn fib(x : u32) -> u32 {
    if x == 0 {
        0
    } else if x == 1 {
        1
    } else {
        fib(x-1) + fib(x-2)
    }
}

fn main() {
    loop {
        let mut guess = String::new();
        println!("Which fibonacci number should I print?");

        io::stdin().read_line(&mut guess)
            .expect("Enter an integer!");
        if guess.trim() == "q" {
            break;
        }
        let g : u32 = guess.trim().parse().unwrap();
        let time_start = SystemTime::now();
        println!("{}", fib(g));
        println!("{:?}", SystemTime::now().duration_since(time_start)
            .expect("Time fail"));
    }
}
