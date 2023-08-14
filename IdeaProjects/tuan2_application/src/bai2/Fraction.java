package bai2;

import java.util.Scanner;

public class Fraction {
    private int numerator, demonirator;
    public Fraction()
    {
         this.numerator = 0;
         this.demonirator = 1;
    }
    public Fraction(int i, int j)
    {
        this.numerator = i;
        this.demonirator = j;
    }
    public void input()
    {
        Scanner enter = new Scanner(System.in);
        System.out.println("enter the numerator: ");
        numerator = enter.nextInt();
        System.out.println("enter the demonirator: ");
        demonirator = enter.nextInt();
    }
    public void output()
    {
        System.out.println(numerator + "/" + demonirator);
    }
    public int GCD(int i, int j)
    {
        if (i % j != 0)
        {
            return GCD(j, i%j);
        }
        return j;
    }
    public String shorten(Fraction a)
    {
        int GCD = GCD(a.numerator, a.demonirator);
        a.numerator /= GCD;
        a.demonirator /= GCD;
        return a.numerator + "/" + a.demonirator;
    }
    public String add(Fraction a, Fraction b)
    {
        Fraction answer = new Fraction();
        answer.numerator = a.numerator*b.demonirator + b.numerator*a.demonirator;
        answer.demonirator = a.demonirator* b.demonirator + a.demonirator*b.demonirator;
        return shorten(answer);
    }
    public String subtract(Fraction a, Fraction b)
    {
        Fraction answer = new Fraction();
        answer.numerator = a.numerator*b.demonirator - b.numerator*a.demonirator;
        answer.demonirator = a.demonirator* b.demonirator - a.demonirator*b.demonirator;
        return shorten(answer);
    }
    public  String multiple(Fraction a, Fraction b)
    {
        Fraction answer = new Fraction();
        answer.numerator = a.numerator* b.numerator;
        answer.demonirator = a.demonirator*b.demonirator;
        return shorten(answer);
    }
    public String divide(Fraction a, Fraction b)
    {
        Fraction answer = new Fraction();
        answer.numerator = a.numerator*b.demonirator;
        answer.demonirator = a.demonirator*b.numerator;
        return shorten(answer);
    }
}
