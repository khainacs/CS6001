package Bai1;

public abstract class Employee {
    private String id, name, quality;
    private Long salary;
    abstract long calcuSalary();

    public Employee(String id, String name, String quality, Long salary) {
        this.id = id;
        this.name = name;
        this.quality = quality;
        this.salary = salary;
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

    public String getQuality() {
        return quality;
    }

    public void setQuality(String quality) {
        this.quality = quality;
    }

    public Long getSalary() {
        return salary;
    }

    public void setSalary(Long salary) {
        this.salary = salary;
    }
}
