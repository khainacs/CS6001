package Bai1;

import Bai1.Employee;

public class Waiters extends Employee {
    public Waiters(String id, String name, String specialize, long salary) {
        super(id, name, specialize, salary);
    }

    @Override
    long calcuSalary() {
        return getSalary();
    }
}
