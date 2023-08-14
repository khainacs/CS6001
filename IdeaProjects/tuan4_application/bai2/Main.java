package Java.tuan4_application.bai2;
import java.util.Scanner;
import java.util.ArrayList;
/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        Array arr = new Array();
        Scanner enter = new Scanner(System.in);
        boolean flag = true;
        while(flag)
        {
            System.out.println("\t :Menu funtion :");
            System.out.println("enter 1: input student");
            System.out.println("enter 2: input employeee");
            System.out.println("enter 3: output student array");
            System.out.println("enter 4: output employee array");
            System.out.println("enter 0: out function");
            int press;
            press = enter.nextInt();
            switch (press) {
                case 1:
                    student obj = new student();
                    obj.input();
                    arr.inputArray(obj);
                    break;
                case 2:
                    employee obj1 = new employee();
                    obj1.input();
                    arr.inputArray(obj1);
                    break;
                case 3: 
                    arr.outputStudent();
                    break;
                case 4: 
                    arr.outputEmployee();
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