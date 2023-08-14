package Bai3;

import java.util.Scanner;

public class EmployeeManage extends EmployeeAdvance {
    private long allowance;

    public long getAllowance() {
        return allowance;
    }

    public void setAllowance(long allowance) {
        this.allowance = allowance;
    }

    public EmployeeManage(String fullName, String birtYear, long salary, String employDate,
                          String idOffice, String nameOffice,
                          String quality, String branch, String college, long allowance) {
        super(fullName, birtYear, salary, employDate, idOffice, nameOffice, quality, branch, college);
        this.allowance = allowance;
    }
    public EmployeeManage() {
        super("", "", 0l, "", "","","",
                "","");
        this.allowance = 0l;
    }
    public void input()
    {
        String str;
        Scanner enter = new Scanner(System.in);
        System.out.println("enter full-name: ");
        str = enter.nextLine();
        this.setName(str);
        System.out.println("enter birth Year: ");
        str = enter.nextLine();
        this.setBirtYear(str);
        System.out.println("enter the salary: ");
        long tmp = enter.nextLong();
        enter.nextLine();
        this.setSalary(tmp);
        System.out.println("enter the employ date: ");
        str = enter.nextLine();
        this.setEmployDate(str);


        System.out.println("enter the id office: ");
        str = enter.nextLine();
        System.out.println("enter the name office: ");
        String str1 = enter.nextLine();
        Office off = new Office(str, str1);
        this.setOff(off);
        System.out.println("enter quality: ");
        str = enter.nextLine();
        this.setQuality(str);
        System.out.println("enter branch: ");
        str = enter.nextLine();
        this.setBranch(str);
        System.out.println("enter the college: ");
        str = enter.nextLine();
        this.setCollege(str);
        System.out.println("enter the allowance: ");
        this.allowance = enter.nextLong();
    }

    @Override
    public Long calSalary() {
        return super.getSalary() + allowance;
    }

    @Override
    public String toString() {
        return super.toString() + "," + allowance + "," + calSalary();
    }
    
}
