package Java.tuan4_application.bai1;

/**
 * human
 */
public class human {
    private String fullName, birtYear;

    public String getFullName() {
        return fullName;
    }

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public String getBirtYear() {
        return birtYear;
    }

    public void setBirtYear(String birtYear) {
        this.birtYear = birtYear;
    }

    public human(String fullName, String birtYear) {
        this.fullName = fullName;
        this.birtYear = birtYear;
    }

    @Override
    public String toString() {
        return "fullName=" + fullName + ", birtYear=" + birtYear;
    }
    
}