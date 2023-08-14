package org.example.Lab1;

public class EmployeeScientist extends Employee {
    private String trainingSchools ;
    private String technique;
    private long toxicAllowance;

    public EmployeeScientist(String id, String name, String yearOfBirth, String level, long basicSalary,
                             String trainingSchools, String technique, long toxicAllowance) {
        super(id, name, yearOfBirth, level, basicSalary);
        this.trainingSchools = trainingSchools;
        this.technique = technique;
        this.toxicAllowance = toxicAllowance;
    }

    public EmployeeScientist() {
        this.trainingSchools = null;
        this.technique = null;
        this.toxicAllowance = 0;
    }

    public String getTrainingSchools() {
        return trainingSchools;
    }

    public void setTrainingSchools(String trainingSchools) {
        this.trainingSchools = trainingSchools;
    }

    public String getTechnique() {
        return technique;
    }

    public void setTechnique(String technique) {
        this.technique = technique;
    }

    public long getToxicAllowance() {
        return toxicAllowance;
    }

    public void setToxicAllowance(long toxicAllowance) {
        this.toxicAllowance = toxicAllowance;
    }

    @Override
    public long getSalary() {
        return super.getSalary() + this.toxicAllowance;
    }

    @Override
    public String toString() {
        return "Nhan Vien Nghien Cuu : " + super.toString() +
                ", training Schools='" + trainingSchools + '\'' +
                ", technique='" + technique + '\'' +
                ", toxicAllowance=" + toxicAllowance ;
    }
}
