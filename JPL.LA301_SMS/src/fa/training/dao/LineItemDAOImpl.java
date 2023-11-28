package fa.training.dao;

import fa.training.entities.Customer;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;

public class LineItemDAOImpl implements  LineItemDAO{
    private Connection conn;
    private String SELECT_QUERY = "SELECT SUM(total) AS total_price\n" +
            "FROM orders\n" +
            "WHERE order_id = Id;";
    public LineItemDAOImpl(Connection repository){
        conn  = repository;
    }
    @Override
    public double computeOrderTotal(int orderId) {
        double totalPrice = 0;
       try{
           Statement statement = conn.createStatement();
           ResultSet resultSet = statement.executeQuery(SELECT_QUERY.replace("Id", Integer.toString(orderId)));
           while (resultSet.next()){
               System.out.println(resultSet.getDouble(1));
           }
       }catch (SQLException e){
           e.printStackTrace();
       }
       return totalPrice;
    }
}
