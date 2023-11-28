package fa.training.dao;

import fa.training.entities.Order;

import java.util.List;

interface orderDAO {
    public List<Order> getAllOrderCustomer(int id);
}
