package main;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.lang.String;

public class Main {
    public static Map<Integer, String> setMenu(String... str){
        if(str == null) return null;
        Map<Integer, String> setMenu = new HashMap<Integer, String>();
        for(int i = 0; i < str.length; i++){
            setMenu.put(i+1, str[i]);
        }
        return setMenu;
    }
    public static void menu(Map<Integer, String> option){
        if(option == null) return;
        for (Map.Entry<Integer, String> i: option.entrySet()) {
            System.out.println(i.getKey() + ". " + i.getValue());
        }
    }
    public static void subMenu(int keyOption , Map<Integer, String> option){
        if(keyOption >= option.size() || option == null) return;
        System.out.println("Do you want continue "+option.get(keyOption) + " ?");
    }
    public static void enterInitStudent(Student listStudent){
        Scanner readInfo = new Scanner(System.in);
        System.out.print("enter the first name:   ");
        String firstName = readInfo.nextLine();
        System.out.print("enter the surname:   ");
        String surName = readInfo.nextLine();
        System.out.print("enter the last name:   ");
        String lastName = readInfo.nextLine();
        System.out.print("enter the grade:   ");
        double grade = readInfo.nextDouble();
       Student student = new Student(firstName, lastName, surName, grade);
       listStudent.addUser(student);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student listStudent = new Student();
        boolean isExit = false;
        int chooseOption = 0;
//        String isFirst = "";

        Map<Integer, String> setOption = setMenu("Add student", "Update", "Delete", "Showing list", "Exit");
        do{
            /*
            *  nếu chooseOption khác không đồng nghĩa là user dã ở sub menu nên phải hỏi xem người dùng có tiếp tục
            * chức năng đã chọn bạn nãy không
            * */

            if (chooseOption != 0){

                subMenu(chooseOption, setOption);
                Scanner readFirst = new Scanner(System.in);
                String isFirst = readFirst.nextLine();
                if (isFirst.equals("Yes")){
                    chooseOption = 5;
                }
                else {
                    menu(setOption);
                }
            }
            else {
                System.out.println("------------MANAGE STUDENT--------------");
                menu(setOption);
            }

            System.out.println("Which option do you want ? ");
            chooseOption = scanner.nextInt();
            switch (chooseOption){
                case 1: enterInitStudent(listStudent);
                    break;
//                case 2: //Update main.Student
//                    break;
                case 3: System.out.print("Which student do you want delete: ");
                        int index = scanner.nextInt();
                    listStudent.removeUser(index);
                    break;
                case 4: listStudent.printUser();
                    break;
                case 5: isExit = true;
                        break;
            }
        }while (isExit != true);
    }
}