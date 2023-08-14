package Java.tuan4_application.bai3;

import java.util.Scanner;

/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        int index = 0;
        Array arr = new Array();
        Scanner enter = new Scanner(System.in);
        boolean flag = true;
        while(flag)
        {
            System.out.println("\t :Menu funtion :");
            System.out.println("enter 1: input 1 student");
            System.out.println("enter 2: input 1 management employeee");
            System.out.println("enter 3: input 1 teacher");
            System.out.println("enter 4: output student array");
            System.out.println("enter 5: output management employee array");
            System.out.println("enter 6: output teacher array");
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
                    employeeManage obj1 = new employeeManage("", "", 0,
                     "", new office("", ""), "", "", "", 0);
                    obj1.input();
                    arr.inputArray(obj1);
                    break;
                case 3: 
                    teacher obj2 = new teacher();
                    obj2.input();
                    arr.inputArray(obj2);
                    break;
                case 4: 
                      arr.outputStudent();
                      break;
                case 5: 
                      arr.outputEmployeeManage();
                      break;
                case 6:
                      arr.outputTeacher();
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