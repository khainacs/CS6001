package fa.training.entities;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import javax.xml.crypto.Data;
import java.sql.Date;

@AllArgsConstructor
@NoArgsConstructor
@Setter
@Getter
public class Order {
    private int orderId;
    private Date orderDate;
    private int customerId;
    private int employeeId;
    private double total;


}
