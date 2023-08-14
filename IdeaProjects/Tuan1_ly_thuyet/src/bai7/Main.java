package bai7;

public class Main {
    public static void main(String[] args) {
        Fraction a = new Fraction();
        Fraction b = new Fraction();
        Fraction result = new Fraction();
        System.out.println("enter a ");
        a.input();
        System.out.println("\n input b");
        b.input();
        System.out.println("GCD of Fraction A : " + a.GCD(a.getNumerator(), a.getDenominator()));
        System.out.println("GCD of Fraction B : " + b.GCD(b.getNumerator(), b.getDenominator()));
        a.shorter();
        System.out.print("Fraction A : " );
        a.output();
        b.shorter();
        System.out.print("\nFraction B :");
        b.output();
        System.out.println(a.toString() + " + " + b.toString() + " = "+ result.add(a, b));
        System.out.println(a.toString() + " - " +b.toString() + " = "+ result.subtract(a, b));
        System.out.println(a.toString() + " * " + b.toString() + " = "+ result.multiply(a, b));
        System.out.println(a.toString() + " / " + b.toString() + " = "+ result.divide(a, b));
    }
}