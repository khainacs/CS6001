package Java.tuan4_application.bai2;

import java.util.Scanner;

/**
 * student
 */
public class student extends human{
    public float grade1, grade2, grade3;

    public float getGrade1() {
        return grade1;
    }

    public void setGrade1(float grade1) {
        this.grade1 = grade1;
    }

    public float getGrade2() {
        return grade2;
    }

    public void setGrade2(float grade2) {
        this.grade2 = grade2;
    }

    public float getGrade3() {
        return grade3;
    }

    public void setGrade3(float grade3) {
        this.grade3 = grade3;
    }

    public student(String fullName, String birtYear, float grade1, float grade2, float grade3) {
        super(fullName, birtYear);
        this.grade1 = grade1;
        this.grade2 = grade2;
        this.grade3 = grade3;
    }
    public student() {
        super("", "");
        this.grade1 = 0f;
        this.grade2 = 0f;
        this.grade3 = 0f;
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
        System.out.println("enter the first grade: ");
        this.grade1 = enter.nextFloat();
        System.out.println("enter the second grade: ");
        this.grade2 = enter.nextFloat();
        System.out.println("enter the third grade: ");
        this.grade3 = enter.nextFloat();
    }
    @Override
    public String toString() {
        return super.toString() + ", grade1=" + grade1 + ", grade2=" + grade2 + ", grade3=" + grade3;
    }

    
}