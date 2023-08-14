package Java.tuan4_application.bai1;

import java.util.Scanner;

/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        human obj = new student("", "", 0.0f, 0.0f, 0.0f);
        human obj1 = new employee("", "", 0, "", 
                                    new office("", ""));
        Scanner enter = new Scanner(System.in);
        boolean flag = true;
        while(flag)
        {
            System.out.println("\t :Menu funtion :");
            System.out.println("enter 1: input 1 student");
            System.out.println("enter 2: input 1 employeee");
            System.out.println("enter 3: output 1 student");
            System.out.println("enter 4: output 1 employee");
            System.out.println("enter 0: out function");
            int press;
            press = enter.nextInt();
            switch (press) {
                case 1:
                    obj = new student("KHAI", "2003", 7.0f, 7.7f,
                     8.0f);
                    break;
                case 2:
                    obj1 = new employee("HUY", "23/4", 25555, "4/2",
                         new office("1", "MIT"));
                    break;
                case 3: 
                    System.out.println("information" + obj1.toString());
                    break;
                case 4: 
                      System.out.println("information: " + obj.toString());
                      break;
                case 0:
                      flag = false;
                      break;
                default:
                    System.out.println("Invalid!!!");
                    break;
            }
        }
    }
}