package Bai2;

import Bai2.Employee;

public class Researcher extends Employee {
    private String specialize;
    private Long toxicAllowance;

    public Researcher(String id, String name, String quality,
                      Long salary, String specialize, Long toxicAllowance) {
        super(id, name, quality, salary);
        this.specialize = specialize;
        this.toxicAllowance = toxicAllowance;
    }

    public String getSpecialize() {
        return specialize;
    }

    public void setSpecialize(String specialize) {
        this.specialize = specialize;
    }

    public Long getToxicAllowance() {
        return toxicAllowance;
    }

    public void setToxicAllowance(Long toxicAllowance) {
        this.toxicAllowance = toxicAllowance;
    }

    @Override
    long calcuSalary() {
        return getSalary() + this.toxicAllowance;
    }
}
