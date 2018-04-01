const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

let quit = false

function fib(x) {
    switch(x) {
        case 0:
            return 0
            break
        case 1:
            return 1
            break
        default:
            return(fib(x-1) + fib(x-2))
            break
    }
}
function ask() {
    rl.question('Which fibonacci number should I print?\n', answer => {
        quit = answer == "q"
        if (quit) {
            return rl.close()
        } else {
            let d = Date.now()
            console.log(fib(parseInt(answer)))
            console.log(`Delay: ${Date.now() - d}ms`)
            ask()
        }
    })
}

ask()