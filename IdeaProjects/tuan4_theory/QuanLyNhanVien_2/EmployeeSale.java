package org.example.Lab2;

public class EmployeeSale extends Employee {
    private int numberOfProducts;
    private double price ;

    public EmployeeSale(int id , String name , int numberOfProducts , double price){
        super(id,name);
        this.numberOfProducts =numberOfProducts;
        this.price = price;
    }

    public int getNumberOfProducts() {
        return numberOfProducts;
    }

    public void setNumberOfProducts(int numberOfProducts) {
        this.numberOfProducts = numberOfProducts;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public double getSalary() {
        return (double) this.numberOfProducts*this.price;
    }

    @Override
    public String toString() {
        return "NhanVienBanHang : " + super.toString() +
                "numberOfProducts=" + numberOfProducts +
                ", price=" + price ;
    }
}
