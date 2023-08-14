package Java.tuan4_application.bai3;

public class employee extends human {
    private long salary;
    private String employDate;
    private office off;
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
    public office getOff() {
        return off;
    }
    public void setOff(office off) {
        this.off = off;
    }
    public employee(String fullName, String birtYear, long salary, String employDate, office off) {
        super(fullName, birtYear);
        this.salary = salary;
        this.employDate = employDate;
        this.off = off;
    }
    @Override
    public String toString() {
        return "salary=" + salary + ", employDate=" + employDate + ", off=" + off;
    }
    
}
