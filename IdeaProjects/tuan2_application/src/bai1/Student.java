package bai1;

import java.util.Scanner;

public class Student {
    private String name, id;
    private float grade;
    Scanner enter = new Scanner(System.in);

    public float getGrade() {
        return grade;
    }

    public void setGrade(float grade) {
        this.grade = grade;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void iput()
    {
        System.out.println("enter the id: ");
        id = enter.nextLine();
        System.out.println("enter the name: ");
        name = enter.nextLine();
        System.out.println("enter the grade: ");
        grade = enter.nextFloat();
    }

    @Override
    public String toString() {
        return "The name: " + name +
                ", id: " + id +
                " and grade: " + grade;
    }
}
