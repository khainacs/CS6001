package bai4;

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner enter = new Scanner(System.in);
        Employee a = new Employee("khai", "1", 4.2F);
        Employee b = new Employee();
        Employee tmp = new Employee("huy",  "2", 5.0F);
        Employee c = new Employee(tmp.getName(), tmp.getId(), tmp.getCofi_salary());
        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());
        int flag;
        System.out.print("you want replace or not, press 1 is excute and otherwise 0: ");
        flag = enter.nextInt();
        enter.nextLine();
        String newName;
        while(flag == 1)
        {
            System.out.println("enter the new name: ");
            newName = enter.nextLine();
            String object;
            System.out.println("enter the object a, b or c: ");
            object = enter.nextLine();
            if (object == "a")
            {
                a.setName(newName);
            }
            else if (object == "b")
            {
                b.setName(newName);
            }
            else
            {
                c.setName(newName);
            }
            System.out.println("you want replace or not, press 1 is excute and otherwise 0: ");
            flag = enter.nextInt();
        }
        Employee max_cofi = a;
        Employee index_empl = a;
        if (max_cofi.getCofi_salary() < b.getCofi_salary())
        {
            max_cofi = b;
            index_empl = b;
        }
        if (max_cofi.getCofi_salary() < c.getCofi_salary()){
            max_cofi = c;
            index_empl = c;
        }
        System.out.println("The employee have largest cofi_salary: " + index_empl.toString());
        int len;
        System.out.print("enter the length of array: ");
        len = enter.nextInt();
        Array arr = new Array(len);
        arr.input();
        arr.output();
    }
}
