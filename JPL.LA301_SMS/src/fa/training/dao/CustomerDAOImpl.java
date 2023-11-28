package fa.training.dao;

import fa.training.entities.Customer;
import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;
@Getter
public class CustomerDAOImpl implements CustomerDAO{
    private List<Customer> listCustomer;
    private Connection conn;
    private String SELECT_QUERY = "select * from customer";
    private String INSERT_QUERY = "insert into customer(customer_name) values (\"customerName\");";
    public CustomerDAOImpl(Connection repository){
       conn  = repository;
    }

    @Override
    public List<Customer> getAllCustomer() {
       try {
           Statement statement = conn.createStatement();
           ResultSet rs = statement.executeQuery(SELECT_QUERY);
           while (rs.next()){
               System.out.println(rs.getInt(1) + " " + rs.getString(2));
           }
       }catch (SQLException ex){
           ex.printStackTrace();
       }

         return listCustomer;
    }

    @Override
    public void addCustomer(Customer customer) {
        try {
            Statement statement = conn.createStatement();
            int flag = statement.executeUpdate(INSERT_QUERY.replace("customerName", customer.getCustomerName()));
            System.out.println("Add Successfully!!!!");
        }catch (SQLException ex){
            ex.printStackTrace();
        }
    }

    @Override
    public void deleteCustomer(int customerId) {
        try {
            Statement statement = conn.createStatement();
            int flag = statement.executeUpdate("call deleteCustomer(" +customerId+");");
            System.out.println("Delete Successfully!!!!");
        }catch (SQLException ex){
            ex.printStackTrace();
        }
    }

}
