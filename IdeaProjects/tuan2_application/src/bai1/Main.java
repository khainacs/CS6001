package bai1;

import java.util.Scanner;

public class Main {
    static Scanner enter = new Scanner(System.in);
    public static void main(String[] args) {
        Array arr = new Array();
        int len;
        System.out.println("To sort sucessfully, you have to enter the grade into float form, please!!!");
        System.out.println("enter the len of student array: ");
        len = enter.nextInt();
        arr.setLen(len);
        arr.input();
        arr.output();
        arr.Sort();
        arr.output();
    }
}
