package Bai3;

public abstract class Human {
    private String name, birtYear;


    public abstract Long calSalary();


    public String toString() {
        return  name + "," + birtYear;
    }

    public Human(String name, String birtYear) {
        this.name = name;
        this.birtYear = birtYear;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBirtYear() {
        return birtYear;
    }

    public void setBirtYear(String birtYear) {
        this.birtYear = birtYear;
    }
}
