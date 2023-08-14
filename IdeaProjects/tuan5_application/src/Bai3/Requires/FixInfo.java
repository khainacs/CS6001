package Bai3.Requires;

import Bai3.Human;
import Bai3.EmployeeManage;
import Bai3.Student;
import Bai3.Teacher;

import java.util.ArrayList;
import java.util.Scanner;

public class FixInfo {
    Scanner enter = new Scanner(System.in);
    public void fixManager(int position, ArrayList<Human> arrObject)
    {
        int selection;
        EmployeeManage tmpManager = new EmployeeManage();
        do
        {
            System.out.println("\t\tOptions that you can choose");
            System.out.println("\t\t\t1.change name");
            System.out.println("\t\t\t2.chang birth year");
            System.out.println("\t\t\t3.change the salary");
            System.out.println("\t\t\t4.change employee date");
            System.out.println("\t\t\t5.change id office");
            System.out.println("\t\t\t6.chang name office");
            System.out.println("\t\t\t7.change the branch");
            System.out.println("\t\t\t8.change the quality");
            System.out.println("\t\t\t9.chang the college");
            System.out.println("\t\t\t10.change the allowance");
            System.out.println();
            System.out.print("enter the option that you want: ");
            selection = enter.nextInt();
            switch (selection)
            {
                case 1:{
                    enter.nextLine();
                    System.out.print("enter the new name: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setName(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 2:{
                    enter.nextLine();
                    System.out.print("enter the new birth year: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setBirtYear(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 3:{
                    enter.nextLine();
                    System.out.print("enter new the salary: ");
                    Long newAtribute = enter.nextLong();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setSalary(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 4:{
                    enter.nextLine();
                    System.out.print("enter the new employee date: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setEmployDate(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 5:{
                    enter.nextLine();
                    System.out.print("enter the new id office: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setIdOffice(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 6:{
                    enter.nextLine();
                    System.out.print("enter the new name office: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setNameOffice(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 7:{
                    enter.nextLine();
                    System.out.print("enter the new branch: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setBranch(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 8:{
                    enter.nextLine();
                    System.out.print("enter the new quality: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setQuality(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 9:{
                    enter.nextLine();
                    System.out.print("enter the new college: ");
                    String newAtribute = enter.nextLine();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setCollege(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                case 10:{
                    enter.nextLine();
                    System.out.print("enter the new allowance: ");
                    Long newAtribute = enter.nextLong();
                    tmpManager = (EmployeeManage) arrObject.get(position-1);
                    tmpManager.setAllowance(newAtribute);
                    arrObject.set(position-1, tmpManager);
                    break;
                }
                default: break;
            }

        }while(selection != 0);
    }
    public void fixTeacher(int position, ArrayList<Human> arrObject)
    {
        int selection;
        Teacher tmpTeacher = new Teacher();
        EmployeeManage tmpManager = new EmployeeManage();
        do
        {
            System.out.println("\t\tOptions that you can choose");
            System.out.println("\t\t\t1.change name");
            System.out.println("\t\t\t2.chang birth year");
            System.out.println("\t\t\t3.change the salary");
            System.out.println("\t\t\t4.change employee date");
            System.out.println("\t\t\t5.change id office");
            System.out.println("\t\t\t6.chang name office");
            System.out.println("\t\t\t7.change the branch");
            System.out.println("\t\t\t8.change the quality");
            System.out.println("\t\t\t9.chang the college");
            System.out.println("\t\t\t10.change the allowance");
            System.out.println();
            System.out.print("enter the option that you want: ");
            selection = enter.nextInt();
            switch (selection)
            {
                case 1:{
                    enter.nextLine();
                    System.out.print("enter the new name: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setName(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 2:{
                    enter.nextLine();
                    System.out.print("enter the new birth year: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setBirtYear(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 3:{
                    enter.nextLine();
                    System.out.print("enter new the salary: ");
                    Long newAtribute = enter.nextLong();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setSalary(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 4:{
                    enter.nextLine();
                    System.out.print("enter the new employee date: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setEmployDate(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 5:{
                    enter.nextLine();
                    System.out.print("enter the new id office: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setIdOffice(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 6:{
                    enter.nextLine();
                    System.out.print("enter the new name office: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setNameOffice(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 7:{
                    enter.nextLine();
                    System.out.print("enter the new branch: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setBranch(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 8:{
                    enter.nextLine();
                    System.out.print("enter the new quality: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setQuality(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 9:{
                    enter.nextLine();
                    System.out.print("enter the new college: ");
                    String newAtribute = enter.nextLine();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setCollege(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                case 10:{
                    enter.nextLine();
                    System.out.print("enter the new remuneration: ");
                    Long newAtribute = enter.nextLong();
                    tmpTeacher = (Teacher) arrObject.get(position-1);
                    tmpTeacher.setRemuneration(newAtribute);
                    arrObject.set(position-1, tmpTeacher);
                    break;
                }
                default: break;
            }

        }while(selection != 0);
    }
    public void fixStudent(int position, ArrayList<Human> arrObject)
    {
        int selection;
        Student tmpStudent = new Student();
        do
        {
            System.out.println("\t\tOptions that you can choose");
            System.out.println("\t\t\t1.change name");
            System.out.println("\t\t\t2.chang birth year");
            System.out.println("\t\t\t3.change first grade");
            System.out.println("\t\t\t3.change second grade");
            System.out.println("\t\t\t3.change third grade");
            System.out.println();
            System.out.print("enter the option that you want: ");
            selection = enter.nextInt();
            switch (selection)
            {
                case 1:{
                    enter.nextLine();
                    System.out.print("enter the new name: ");
                    String newAtribute = enter.nextLine();
                    tmpStudent = (Student) arrObject.get(position-1);
                    tmpStudent.setName(newAtribute);
                    arrObject.set(position-1, tmpStudent);
                    break;
                }
                case 2:{
                    enter.nextLine();
                    System.out.print("enter the new birth year: ");
                    String newAtribute = enter.nextLine();
                    tmpStudent = (Student) arrObject.get(position-1);
                    tmpStudent.setBirtYear(newAtribute);
                    arrObject.set(position-1, tmpStudent);
                    break;
                }
                case 3:{
                    enter.nextLine();
                    System.out.print("enter the new first grade: ");
                    Float newAtribute = enter.nextFloat();
                    tmpStudent = (Student) arrObject.get(position-1);
                    tmpStudent.setGrade1(newAtribute);
                    arrObject.set(position-1, tmpStudent);
                    break;
                }
                case 4:{
                    enter.nextLine();
                    System.out.print("enter the new second grade: ");
                    Float newAtribute = enter.nextFloat();
                    tmpStudent = (Student) arrObject.get(position-1);
                    tmpStudent.setGrade2(newAtribute);
                    arrObject.set(position-1, tmpStudent);
                    break;
                }
                case 5:{
                    enter.nextLine();
                    System.out.print("enter the new third grade: ");
                    Float newAtribute = enter.nextFloat();
                    tmpStudent = (Student) arrObject.get(position-1);
                    tmpStudent.setGrade3(newAtribute);
                    arrObject.set(position-1, tmpStudent);
                    break;
                }
                default: break;
            }

        }while(selection != 0);
    }
}
