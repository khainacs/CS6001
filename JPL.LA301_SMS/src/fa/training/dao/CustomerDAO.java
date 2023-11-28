package fa.training.dao;

import fa.training.entities.Customer;

import java.util.List;

interface CustomerDAO {
    public List<Customer> getAllCustomer();
    public void addCustomer(Customer customer);
    public void deleteCustomer(int customerId);
}
