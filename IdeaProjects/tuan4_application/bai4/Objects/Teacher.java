package Java.tuan4_application.bai4.Objects;

import Java.tuan4_application.bai4.Objects.EmployeeManage;
import Java.tuan4_application.bai4.Objects.Office;

import java.util.Scanner;

public class Teacher extends EmployeeAdvance {
    private long remuneration;

    public long getRemuneration() {
        return remuneration;
    }

    public void setRemuneration(long remuneration) {
        this.remuneration = remuneration;
    }

    public Teacher(String fullName, String birtYear, long salary, String employDate, String idOffice,
                String nameOffice, String quality, String branch, String college, long remuneration) {
        super(fullName, birtYear, salary, employDate, idOffice, nameOffice, quality, branch, college);
        this.remuneration = remuneration;
    }
    public Teacher()
    {
        super("", "", 0, "", "", "",
        "", "", "");
        this.remuneration = 0;
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
        long tmp = enter.nextLong();
        this.setSalary(tmp);
        System.out.println("enter the employ date: ");
        str = enter.nextLine();
        this.setEmployDate(str);


        System.out.println("enter the id office: ");
        str = enter.nextLine();
        System.out.println("enter the name office: ");
        String str1 = enter.nextLine();
        Office Off = new Office(str, str1);
        this.setOff(Off);
        System.out.println("enter quality: ");
        str = enter.nextLine();
        this.setQuality(str);
        System.out.println("enter branch: ");
        str = enter.nextLine();
        this.setBranch(str);
        System.out.println("enter the college: ");
        str = enter.nextLine();
        this.setCollege(str);
        System.out.println("enter the remuneration: ");
        this.remuneration = enter.nextLong();
    }
    @Override
    public String toString() {
        return super.toString() + "," + remuneration;
    }
    
}
