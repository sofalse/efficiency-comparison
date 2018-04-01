package com.mmdc;

import java.util.Scanner;

public class Main {
    public Main() {
    }

    static final int fib(int x) {
        switch(x) {
            case 0:
                return 0;
            case 1:
                return 1;
            default:
                return fib(x - 1) + fib(x - 2);
        }
    }

    static void ask() {
        Scanner x = new Scanner(System.in);
        System.out.println("Which fibonacci number should I print?");

        try {
            int quit = x.nextInt();
            if (quit == -1) {
                return;
            }

            long var2 = System.currentTimeMillis();
            System.out.printf("%s%n", fib(quit));
            System.out.printf("Delay: %dms%n", System.currentTimeMillis() - var2);
            if (quit != -1) {
                ask();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

    public static void main(String[] x) {
        ask();
    }
}
