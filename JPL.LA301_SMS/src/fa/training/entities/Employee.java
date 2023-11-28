package fa.training.entities;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Setter
@Getter
@AllArgsConstructor
@NoArgsConstructor
public class Employee {
    private int employeeId;
    private String employeeName;
    private double salary;
    private int spvrId;


}
