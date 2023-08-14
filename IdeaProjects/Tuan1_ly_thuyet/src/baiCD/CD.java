package baiCD;
import java.util.Scanner;
public class CD {
    private int id ;
    private String name;
    private int numbers ;
    private float price;
    public CD(int id, String name, int numbers, float price) {
        this.id = id;
        this.name = name;
        this.numbers = numbers;
        this.price = price;
    }
    public CD(){
        this.id = 9999999;
        this.name = "";
        this.numbers = 0 ;
        this.price = 0.0f;
    }
    public int getId() {
        return id;
    }
    public void setId(int id) {
        do {
            this.id = id;
            if(id < 0){
                System.out.print("Invalid , Re-enter : ");
            }
        }while(id < 0);
    }
    public void setPrice(float price) {
        do {
            this.price = price;
            if(price < 0 ){
                System.out.print("Invalid , Re-enter : ");
            }
        }while(price < 0);
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
    public int getNumbers() {
        return numbers;
    }
    public void setNumbers(int numbers) {
        do {
            this.numbers = numbers;
            if(numbers < 0 ){
                System.out.print("Invalid , Re-enter : ");
            }
        }while(numbers < 0);
    }
    public float getPrice() {
        return price;
    }
    public void input(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter id :");
        this.id = input.nextInt();
        System.out.print("Enter name : ");
        input.nextLine();
        this.name = input.nextLine();
        System.out.print("Enter numbers : ");
        this.numbers = input.nextInt();
        System.out.print("Enter price : ");
        this.price = input.nextFloat();
    }
    public void output(){
        System.out.println(this.id + " " + this.name + " " + this.numbers +" "+this.price);
    }

}