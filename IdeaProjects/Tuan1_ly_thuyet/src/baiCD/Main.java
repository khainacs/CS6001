package baiCD;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        CD obj1 = new CD();
        CD obj2 = new CD();
        Scanner input = new Scanner(System.in);
        System.out.println("enter input");
        obj1.input();
        obj2.input();
        System.out.print("Enter id CD : ");
        float id = input.nextInt();
        System.out.print("New Score : ");
        float newPrice = input.nextFloat();
        if (obj1.getId() == id) {
            obj1.setPrice(newPrice);
            System.out.println("output: ");
            obj1.output();
        }
        if (obj2.getId() == id) {
            obj2.setPrice(newPrice);
            System.out.println("output: ");
            obj2.output();
        } else {
            System.out.println("UnExist!!!");
        }
        System.out.println("CD have more numbers : ");
        if (obj1.getNumbers() > obj2.getNumbers()) {
            obj1.output();
        } else if (obj2.getNumbers() > obj1.getNumbers()) {
            obj2.output();
        } else {
            obj1.output();
            obj2.output();
        }
    }
}
