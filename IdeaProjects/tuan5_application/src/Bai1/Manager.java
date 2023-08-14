package Bai1;

import Bai1.Employee;

public  class Manager extends Employee {
    private String specialize;
    private Long allowancePosition;

    public Manager(String id, String name, String quality,
                   Long salary, String specialize, Long allowancePosition) {
        super(id, name, quality, salary);
        this.specialize = specialize;
        this.allowancePosition = allowancePosition;
    }

    public String getSpecialize() {
        return specialize;
    }

    public void setSpecialize(String specialize) {
        this.specialize = specialize;
    }

    public Long getAllowancePosition() {
        return allowancePosition;
    }

    public void setAllowancePosition(Long allowancePosition) {
        this.allowancePosition = allowancePosition;
    }

    @Override
    long calcuSalary() {
        return this.allowancePosition + getSalary();
    }
}
