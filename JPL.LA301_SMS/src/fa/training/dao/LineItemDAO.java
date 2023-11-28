package fa.training.dao;

import fa.training.entities.LineItem;

import java.util.List;

interface LineItemDAO {
    public double computeOrderTotal(int orderId);
}