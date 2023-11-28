package fa.training.entities;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Setter
@Getter
@AllArgsConstructor
@NoArgsConstructor
public class LineItem {
    private int orderId;
    private int productId;
    private int quantity;
    private double price;


}
