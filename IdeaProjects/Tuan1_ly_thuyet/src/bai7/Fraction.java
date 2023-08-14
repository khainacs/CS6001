package bai7;
import java.util.Scanner;
public class Fraction {
    private int numerator;
    private int denominator;
    public Fraction(int numerator, int denominator) {
        this.numerator = numerator;
        this.denominator = denominator;
    }
    public Fraction(){
        this.numerator = 0;
        this.denominator = 1;
    }
    public int getNumerator() {
        return numerator;
    }
    public void setNumerator(int numerator) {
        this.numerator = numerator;
    }
    public int getDenominator() {
        return denominator;
    }
    public void setDenominator(int denominator) {
        do {
            this.denominator = denominator;
            if(this.denominator == 0)
                System.out.println("Invalid!!!");
        }while(denominator == 0);
    }
    public void output(){
        System.out.println( this.numerator + "/" + this.denominator );
    }
    public int GCD(int numerator , int denominator){
        if(numerator == 0 || denominator == 0)
            return numerator + denominator;
        while(numerator != denominator){
            if( numerator > denominator){
                numerator -= denominator;
            }else{
                denominator -= numerator;
            }
        }
        return numerator;
    }
    public void shorter(){
        int GCD = GCD(this.numerator, this.denominator);
        this.numerator /= GCD;
        this.denominator /= GCD;
    }
    public String add(Fraction a , Fraction b){
        Fraction result = new Fraction() ;
        if(a.denominator == b.denominator){
            result.numerator =a.numerator + b.numerator;
            result.denominator = a.denominator;
        }else{
            result.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
            result.denominator = a.denominator*b.denominator;
        }
        result.shorter();

        if(result.denominator == 1 ){
            String str = result.numerator + "";
            return str;
        }
        return result.toString();
    }
    public String subtract(Fraction a , Fraction b){
        Fraction result = new Fraction() ;
        if(a.denominator == b.denominator){
            result.numerator = a.numerator - b.numerator;
            result.denominator = a.denominator;
        }else{
            result.numerator = a.numerator*b.denominator - b.numerator*a.denominator;
            result.denominator = a.denominator*b.denominator;
        }
        result.shorter();
        if(result.denominator == 1 ){
            String str = result.numerator + "";
            return str;
        }
        return result.toString();
    }
    public void input(){
        Scanner input = new Scanner(System.in);
        System.out.print("Numerator : ");
        this.numerator = input.nextInt();
        do {

            System.out.print("Denominator  : ");
            this.denominator = input.nextInt();
            if(this.denominator == 0){
                System.out.println(" Re_enter : ");
            }
        }while( this.denominator == 0);
    }
    public String multiply( Fraction a , Fraction b){
        Fraction result = new Fraction() ;
        result.numerator = a.numerator * b.numerator;
        result.denominator = a.denominator * b.denominator;
        result.shorter();
        if(result.denominator == 1 ){
            String str = result.numerator + "";
            return str;
        }
        return result.toString();
    }
    public String divide( Fraction a , Fraction b){
        Fraction result = new Fraction() ;
        result.numerator = a.numerator * b.denominator;
        result.denominator = a.denominator * b.numerator;
        result.shorter();
        if(result.denominator == 1 ){
            String str = result.numerator + "";
            return str;
        }
        return result.toString();
    }
    @Override
    public String toString() {
        return this.numerator+"/"+this.denominator;
    }
}