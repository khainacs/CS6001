package fa.training.entities;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Student extends Person {
    private String studentID;
    private double theory;
    private double practice;

    public Student(String name, String gender, String phone, String email, String studentID,
                   double theory, double practice){
        super(name, gender, phone, email);
        this.studentID = studentID;
        this.theory = theory;
        this.practice = practice;
    }

    /**
     * @return the average student's grade of theory and practice
     */
    public double calculateFinalMark(){
        return (this.practice + this.theory) / 2;
    }

    @Override
    public String toString() {
        return super.toString() + " " +
                "studentID='" + studentID + '\'' +
                ", theory=" + theory +
                ", practice=" + practice;
    }
}
