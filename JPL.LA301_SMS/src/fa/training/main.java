package fa.training;

import fa.training.dao.CustomerDAOImpl;
import fa.training.dao.LineItemDAOImpl;
import fa.training.dao.OrderDAOImpl;
import fa.training.dao.Repository;
import fa.training.entities.Customer;

import java.sql.*;

public class main {


    public static void main(String[] args) {
        Connection connection = Repository.getConnection();

        //get All customer
//        CustomerDAOImpl customerDAO = new CustomerDAOImpl(connection);
//        customerDAO.getAllCustomer();

        //get order where id = ?
//        OrderDAOImpl orderDAO = new OrderDAOImpl(connection);
//        orderDAO.getAllOrderCustomer(1);

        //compute order total where orderId = ?
//        LineItemDAOImpl lineItemDAO = new LineItemDAOImpl(connection);
//        lineItemDAO.computeOrderTotal(1);

        //add customer
//        Customer customer = new Customer(1, "khai");
//        CustomerDAOImpl customerDAO = new CustomerDAOImpl(connection);
//        customerDAO.addCustomer(customer);

        //delete customer
//        CustomerDAOImpl customerDAO = new CustomerDAOImpl(connection);
//        customerDAO.deleteCustomer(11);


    }




}
