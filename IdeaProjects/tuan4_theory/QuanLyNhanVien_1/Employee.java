package org.example.Lab1;

public abstract class Employee {
    private String id;
    private String name;
    private String yearOfBirth;
    private String level;
    private long basicSalary;

    public Employee(String id, String name, String yearOfBirth, String level, long basicSalary) {
        this.id = id;
        this.name = name;
        this.yearOfBirth = yearOfBirth;
        this.level = level;
        this.basicSalary = basicSalary;
    }

    public Employee(){
        this.id = null;
        this.name = null;
        this.yearOfBirth = null;
        this.level = null;
        this.basicSalary = 0l;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getYearOfBirth() {
        return yearOfBirth;
    }

    public void setYearOfBirth(String yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }

    public String getLevel() {
        return level;
    }

    public void setLevel(String level) {
        this.level = level;
    }

    public long getBasicSalary() {
        return basicSalary;
    }

    public void setBasicSalary(long basicSalary) {
        this.basicSalary = basicSalary;
    }

    public long getSalary(){
        return basicSalary;
    }

    @Override
    public String toString() {
        return "id='" + id + '\'' +
                ", name='" + name + '\'' +
                ", yearOfBirth='" + yearOfBirth + '\'' +
                ", level='" + level + '\'' +
                ", basicSalary=" + basicSalary ;
    }
}
