package fa.training.entities;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Teacher extends Person{
    private double bassicSalary;
    private double subSlidy;

    public Teacher(String name, String gender, String phone, String email, double bassicSalary,
                   double subSlidy){
        super(name, gender, phone, email);
        this.bassicSalary = bassicSalary;
        this.subSlidy = subSlidy;
    }
    /**
     * @return the salary of teacher
     */
    public double caculateSalary(){
        return this.bassicSalary + this.subSlidy;
    }

    @Override
    public String toString() {
        return super.toString() + " " +
                "bassicSalary=" + bassicSalary +
                ", subSlidy=" + subSlidy;
    }
}
