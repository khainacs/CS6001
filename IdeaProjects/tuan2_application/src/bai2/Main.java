package bai2;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner enter = new Scanner(System.in);
        Fraction a = new Fraction();
        Fraction b = new Fraction();
        System.out.println("enter fraction a: ");
        a.input();
        System.out.println("ener fraction b: ");
        b.input();
        System.out.println("The fraction a after shorten: " + a.shorten(a));
        System.out.println("The fraction b after shorten: " + b.shorten(b));
        Fraction result = new Fraction();
        System.out.println("The add of two fraction: " + result.add(a, b));
        System.out.println("the subtract of two fraction: " + result.subtract(a, b));
        System.out.println("the multiple of two fraction: " + result.multiple(a, b));
        System.out.println("the divide of two fraction: " + result.divide(a, b));
    }
}
