package Java.tuan4_application.bai2;

import java.util.Scanner;

public class employee extends human {
    private long salary;
    private String employDate;
    private office off;
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
    public office getOff() {
        return off;
    }
    public void setOff(office off) {
        this.off = off;
    }
    public employee(String fullName, String birtYear, long salary, String employDate, office off) {
        super(fullName, birtYear);
        this.salary = salary;
        this.employDate = employDate;
        this.off = off;
    }
    public employee() {
        super("", "");
        this.salary = 0;
        this.employDate = "";
        this.off = new office("", "");
    }
    public void input()
    {
        String str;
        Scanner enter = new Scanner(System.in);
        System.out.println("enter full-name: ");
        str = enter.nextLine();
        this.setFullName(str);
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
        office off = new office(str, str1);
        this.setOff(off); 
    }
    @Override
    public String toString() {
        return "salary=" + salary + ", employDate=" + employDate + ", off=" + off.toString();
    }
    
}
