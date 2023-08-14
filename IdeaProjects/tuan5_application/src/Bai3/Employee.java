package Bai3;



import java.util.Scanner;

public abstract class Employee extends Human {
    private long salary;
    private String employDate;
    private String idOffice, nameOffice;
    private Office Off;
    public long getSalary() {
        return salary;
    }
    public void setSalary(long salary) {
        this.salary = salary;
    }
    public String getEmployDate() {
        return employDate;
    }
    public void setEmployDate(String employDate) {
        this.employDate = employDate;
    }

    public void setIdOffice(String idOffice) {
        this.Off = new Office(idOffice, this.nameOffice);
    }

    public void setOff(Office off) {
        this.Off = off;
    }

    public void setNameOffice(String nameOffice) {
        this.Off = new Office(this.idOffice, nameOffice);
    }

    public Employee(String fullName, String birtYear, long salary, String employDate,
                    String idOffice, String nameOffice) {
        super(fullName, birtYear);
        this.salary = salary;
        this.employDate = employDate;
        this.Off = new Office(idOffice, nameOffice);
    }

    public void input() {
        String str;
        Scanner enter = new Scanner(System.in);
        System.out.println("enter full-name: ");
        str = enter.nextLine();
        this.setName(str);
        System.out.println("enter birth Year: ");
        str = enter.nextLine();
        this.setBirtYear(str);
        System.out.println("enter the salary: ");
        this.salary = enter.nextLong();
        enter.nextLine();
        System.out.println("enter the employ date: ");
        this.employDate = enter.nextLine();


        System.out.println("enter the id office: ");
        str = enter.nextLine();
        System.out.println("enter the name office: ");
        String str1 = enter.nextLine();
        Office off = new Office(str, str1);
        this.setOff(off);
    }

    @Override
    public String toString() {
        return super.toString() + "," + salary + "," + employDate + "," + Off.toString();
    }
    
}
