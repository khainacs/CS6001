package bai4;

import java.util.Scanner;

public class Employee {
    private String name, id;
    private int salary;
    private float cofi_salary;
    private int quantity;
    //definition for 1 employee
    public Employee()
    {
        this.name = "";
        this.id = "";
        this.salary = salary;
        this.cofi_salary = cofi_salary;
        this.quantity = quantity;
    }
    public Employee(String name, String id, float cofi_salary)
    {
        this.name = name;
        this.id = id;
        if ((salary < 0) | (cofi_salary < 0) | quantity < 0)
        {
            this.cofi_salary = cofi_salary;
        }
        else
        {
            this.salary = salary;
            this.cofi_salary = cofi_salary;
            this.quantity = quantity;
        }
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }

    public float getCofi_salary() {
        return cofi_salary;
    }

    public void setCofi_salary(float cofi_salary) {
        this.cofi_salary = cofi_salary;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    public void input()
    {
        Scanner enter = new Scanner(System.in);
        System.out.println("enter the id: ");
        id = enter.nextLine();
        System.out.println("enter the name: ");
        name = enter.nextLine();
        System.out.println("enter cofi_salary: ");
        cofi_salary = enter.nextFloat();
    }

    public int getQuantity() {
        return quantity;
    }

    @Override
    public String toString() {
        return "Employee{" +
                "name='" + this.name + '\'' +
                ", id='" + this.id + '\'' +
                ", salary=" + this.salary +
                ", cofi_salary=" + this.cofi_salary +
                '}';
    }

    public double getSalary()
    {
        return this.salary*this.cofi_salary;
    }

}
