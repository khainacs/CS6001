package Java.tuan4_application.bai4.Objects;

import Java.tuan4_application.bai4.Objects.Office;

public class Employee extends Human {
    private long salary;
    private String employDate;
    private String idOffice, nameOffice;
    private Office Off;
    public long getSalary() {
        return salary;
    }
    public void setSalary(long salary) {
        this.salary = salary;
    }
    public String getEmployDate() {
        return employDate;
    }
    public void setEmployDate(String employDate) {
        this.employDate = employDate;
    }

    public void setIdOffice(String idOffice) {
        this.Off = new Office(idOffice, this.nameOffice);
    }

    public void setOff(Office off) {
        this.Off = off;
    }

    public void setNameOffice(String nameOffice) {
        this.Off = new Office(this.idOffice, nameOffice);
    }

    public Employee(String fullName, String birtYear, long salary, String employDate,
                    String idOffice, String nameOffice) {
        super(fullName, birtYear);
        this.salary = salary;
        this.employDate = employDate;
        this.Off = new Office(idOffice, nameOffice);
    }
    @Override
    public String toString() {
        return super.toString() + "," + salary + "," + employDate + "," + Off.toString();
    }
    
}
