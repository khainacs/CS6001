package org.example.Lab2;

public class EmployeeCompany extends Employee {
    private int numberOfHours;
    private double price ;

    public EmployeeCompany(int id , String name , int numberOfHours , double price){
        super(id,name);
        this.numberOfHours =numberOfHours;
        this.price = price;
    }

    public EmployeeCompany(){
        this.numberOfHours = 0;
        this.price = 0.0f;
    }

    public int getNumberOfHours() {
        return numberOfHours;
    }

    public void setNumberOfHours(int numberOfHours) {
        this.numberOfHours = numberOfHours;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public double getSalary() {
        return (double) this.numberOfHours*this.price;
    }

    @Override
    public String toString() {
        return "NhanVienVanPhong{" + super.toString() +
                "numberOfHours=" + numberOfHours +
                ", price=" + price ;
    }
}
