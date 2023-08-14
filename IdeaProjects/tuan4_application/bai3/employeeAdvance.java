package Java.tuan4_application.bai3;

/**
 * employeeAdvance
 */
public class employeeAdvance extends employee{
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

    public employeeAdvance(String fullName, String birtYear, long salary, String employDate, office off, String quality,
            String branch, String college) {
        super(fullName, birtYear, salary, employDate, off);
        this.quality = quality;
        this.branch = branch;
        this.college = college;
    }

    @Override
    public String toString() {
        return  super.toString() +", quality=" + quality + ", branch=" + branch + ", college=" + college;
    }
    
}