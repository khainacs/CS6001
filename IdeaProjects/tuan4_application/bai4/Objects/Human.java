package Java.tuan4_application.bai4.Objects;

/**
 * human
 */
public class Human {
    public String fullName, birtYear;

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

    public Human(String fullName, String birtYear) {
        this.fullName = fullName;
        this.birtYear = birtYear;
    }
    @Override
    public String toString() {
        return  fullName + "," + birtYear;
    }
    
}