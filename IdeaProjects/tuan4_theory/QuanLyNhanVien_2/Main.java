package org.example.Lab2;

public class Main {
    public static void main(String[] args) {
        Array manage = new Array("VINGROUP");

        EmployeeCompany obj = new EmployeeCompany(1,"John Henderson",120,
                30000);
        EmployeeSale obj1 = new EmployeeSale(4,"Steven Job",300,
                12000);

        manage.addStaff(obj);

        manage.addStaff(obj1);

        manage.output();

        System.out.println("Max salary of sales : "+manage.getMaxSalaryOfSales());
    }
}
