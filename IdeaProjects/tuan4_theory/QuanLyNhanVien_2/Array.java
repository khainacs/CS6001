package org.example.Lab2;


import java.util.ArrayList;

public class Array {
    private String nameCompany;

    private ArrayList<Employee> list ;

    public Array(String nameCompany){
        this.nameCompany = nameCompany;
        this.list = new ArrayList<Employee>();
    }

    public boolean addStaff(Employee obj){
        return this.list.add(obj);
    }

    public boolean removeStaff(Employee obj){
        if(this.list.contains(obj)){
            return this.list.remove(obj);
        }
        return false;
    }

    public double getMaxSalaryOfSales(){
        double max = 0.0f;
        for(Employee nv : this.list){
            if(nv instanceof EmployeeSale){
                if(max <= nv.getSalary()){
                    max = nv.getSalary();
                }
            }
        }
        return max;
    }

    public void title(){
        System.out.printf("|%-3s|%-25s|%-15s|%-25s|%-25s|%-10s|","ID","Name","Job",
                "Number Of Products","Number Of Hours","Price");
        System.out.println();
    }
    public void output(){
        title();
        for(Employee nv : this.list){
            if(nv instanceof EmployeeSale){
                System.out.printf("|%-3d|%-25s|%-15s|%-25d|%-25s|%-10.1f|",
                        nv.id,nv.name,"Sales",((EmployeeSale) nv).getNumberOfProducts(),"null",
                        ((EmployeeSale) nv).getPrice());
                System.out.println();
            }
            if(nv instanceof EmployeeCompany){
                System.out.printf("|%-3d|%-25s|%-15s|%-25s|%-25d|%-10.1f|",
                        nv.id,nv.name,"Office Staff","null",((EmployeeCompany) nv).getNumberOfHours(),
                        ((EmployeeCompany) nv).getPrice());
                System.out.println();
            }
        }
    }
}
