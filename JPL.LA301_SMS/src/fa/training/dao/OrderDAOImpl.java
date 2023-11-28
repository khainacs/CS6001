package fa.training.dao;

import fa.training.entities.Order;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;

public class OrderDAOImpl implements orderDAO{
    private Connection conn;
    private List<Order> listOrder;
    private String SELECT_QUERY = "select * from orders where customer_id = Id";
    public OrderDAOImpl(Connection repository){
        conn  = repository;
    }
    @Override
    public List<Order> getAllOrderCustomer(int customerId) {
        try{
            Statement statement = conn.createStatement();
            ResultSet resultSet = statement.executeQuery(SELECT_QUERY.replace("Id", Integer.toString(customerId)));
            while (resultSet.next()){
                System.out.println( resultSet.getInt(1)
                                     + " " + resultSet.getDate(2) + " " + resultSet.getInt(3)
                                     + " " + resultSet.getInt(4));
            }
        }catch (SQLException ex){
            ex.printStackTrace();
        }

        return this.listOrder;
    }
}
