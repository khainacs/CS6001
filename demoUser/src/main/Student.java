package main;

import lombok.Getter;
import lombok.Setter;

import java.util.Vector;
@Setter
@Getter
public class Student {
    private String firstName;
    private double grade;
    private String surName;
    private String lastName;
    private Vector<Student> listUser;
    public Student(){
        listUser = new Vector<Student>();
    }
    public Student(String firstName, String lastName, String surName, double grade){
        this.firstName = firstName;
        this.surName = surName;
        this.lastName = lastName;
        this.grade = grade;

    }

    public void addUser(Student student){
        this.listUser.add(student);
    }
    public void removeUser(int index){
        this.listUser.remove(index-1);
    }
    @Override
    public String toString() {
        return "firstName='" + firstName + '\'' +
                ", grade='" + grade + '\'' +
                ", surName='" + surName + '\'' +
                ", lastName='" + lastName + '\'';
    }

    public void printUser(){

        for (int i = 0; i < this.listUser.size(); i++) {
            System.out.println(i+1 + ". " +listUser.get(i).toString());

        }
    }
}
