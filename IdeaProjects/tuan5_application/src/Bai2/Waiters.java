package Bai2;

import Bai2.Employee;

public class Waiters extends Employee {
    public Waiters(String id, String name, String specialize, long salary) {
        super(id, name, specialize, salary);
    }

    @Override
    long calcuSalary() {
        return getSalary();
    }
}
