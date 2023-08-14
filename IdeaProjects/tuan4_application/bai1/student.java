package Java.tuan4_application.bai1;

/**
 * student
 */
public class student extends human{
    private float grade1, grade2, grade3;

    public float getGrade1() {
        return grade1;
    }

    public void setGrade1(float grade1) {
        this.grade1 = grade1;
    }

    public float getGrade2() {
        return grade2;
    }

    public void setGrade2(float grade2) {
        this.grade2 = grade2;
    }

    public float getGrade3() {
        return grade3;
    }

    public void setGrade3(float grade3) {
        this.grade3 = grade3;
    }

    public student(String fullName, String birtYear, float grade1, float grade2, float grade3) {
        super(fullName, birtYear);
        this.grade1 = grade1;
        this.grade2 = grade2;
        this.grade3 = grade3;
    }
    @Override
    public String toString() {
        return super.toString() + ", grade1=" + grade1 + ", grade2=" + grade2 + ", grade3=" + grade3;
    }

    
}