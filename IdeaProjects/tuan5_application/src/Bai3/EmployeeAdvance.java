package Bai3;

/**
 * employeeAdvance
 */
abstract class EmployeeAdvance extends Employee{
    private String quality, branch, college;

    public String getQuality() {
        return quality;
    }

    public void setQuality(String quality) {
        this.quality = quality;
    }

    public String getBranch() {
        return branch;
    }

    public void setBranch(String branch) {
        this.branch = branch;
    }

    public String getCollege() {
        return college;
    }

    public void setCollege(String college) {
        this.college = college;
    }

    public EmployeeAdvance(String fullName, String birtYear, long salary, String employDate,
                           String idOffice, String nameOffice, String quality,
                           String branch, String college) {
        super(fullName, birtYear, salary, employDate, idOffice, nameOffice);
        this.quality = quality;
        this.branch = branch;
        this.college = college;
    }

    public abstract void input();
    public  String toString(){ return super.toString() + "," + quality + "," + branch + "," + college;};

    
}