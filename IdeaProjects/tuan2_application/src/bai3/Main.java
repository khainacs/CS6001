package bai3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner enter = new Scanner(System.in);
        int i, j;
        System.out.println("Initialization first coodinate: ");
        i = enter.nextInt();
        j = enter.nextInt();
        Coodinate a = new Coodinate(i, j);
        System.out.println("Initialization second coodinate: ");
        i = enter.nextInt();
        j = enter.nextInt();
        Coodinate b = new Coodinate(i, j);
        Coodinate result = new Coodinate();
        System.out.println("The add of two coodinate: " +  result.add(a, b));
        System.out.println("The symmetry of a coodinate: " + a.Symmetry(a));
        System.out.println("The symmetry of b coodinate: " + b.Symmetry(b));
    }
}
