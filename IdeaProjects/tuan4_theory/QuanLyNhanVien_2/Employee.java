package org.example.Lab2;

public abstract class Employee {
    protected int id ;
    protected String name ;

    public Employee(int id , String name){
        this.id = id ;
        this.name = name;
    }

    public Employee(){
        this.id = 0;
        this.name = null;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public abstract  double getSalary();

    @Override
    public String toString() {
        return " id= " + id +
                ", name='" + name + '\'' +
                '}';
    }
}
