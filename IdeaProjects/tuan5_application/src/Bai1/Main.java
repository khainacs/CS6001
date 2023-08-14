package Bai1;

import Bai1.Manager;
import Bai1.Researcher;
import Bai1.Waiters;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Waiters obj = new Waiters("1", "KHAI", "Pha che", 2000l);
        Manager obj1 = new Manager("2", "HUY", "Bachelor", 3000l,
                "Tai chinh", 450l);
        Researcher obj2 = new Researcher("3", "Hung", "Ph.D", 2030l,
                "Mix", 500l);
        System.out.println(obj.getName() + " has salary: " + obj.calcuSalary());
        System.out.println(obj1.getName() + " has salary: " + obj1.calcuSalary());
        System.out.println(obj2.getName() + " has alary: " + obj2.calcuSalary());
    }
}