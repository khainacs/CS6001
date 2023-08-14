package org.example.Lab1;

import java.util.Scanner;

public class Main {
    public static void menu(){
        System.out.println("\t\t\t\t+----------------------------------+");
        System.out.println("\t\t\t\t| 1. Thêm một nhân viên quản lý    | ");
        System.out.println("\t\t\t\t+----------------------------------+");
        System.out.println("\t\t\t\t| 2. Thêm một nhân viên nghiên cữu | ");
        System.out.println("\t\t\t\t+----------------------------------+");
        System.out.println("\t\t\t\t| 3. Thêm một nhân viên phục vụ    | ");
        System.out.println("\t\t\t\t+----------------------------------+");
        System.out.println("\t\t\t\t| 4. In danh sách nhân viên        | ");
        System.out.println("\t\t\t\t+----------------------------------+");
        System.out.println("\t\t\t\t| 5. In bảng lương tăng dần        | ");
        System.out.println("\t\t\t\t+----------------------------------+");
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        Array manager = new Array();

        EmployeeManage obj  = new EmployeeManage();
        EmployeeScientist obj1 = new EmployeeScientist();
        Waiter obj2 = new Waiter();

        int select = 0;

        do {
            menu();
            System.out.print("Lựa chọn : ");
            select = input.nextInt();
            switch (select){
                case 1 :{
                    manager.inputInfo(obj);
                    break;
                }
                case 2 :{
                    manager.inputInfo(obj1);
                    break;
                }
                case 3 :{
                    manager.inputInfo(obj2);
                    break;
                }
                case 4 : {
                    manager.output();
                    break;
                }
                case 5 :{
                    manager.showSalaryTable();
                    break;
                }

            }
        }while(select != 0 );

    }
}