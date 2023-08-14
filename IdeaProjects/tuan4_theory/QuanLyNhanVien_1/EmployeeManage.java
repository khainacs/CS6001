package org.example.Lab1;

public class EmployeeManage extends Employee {
    private String trainingSchools;
    private String technique;
    private long posAllowance;

    public EmployeeManage(String id , String name , String yearOfBirth , String level ,
                          long basicSalary , String trainingSchools , String technique , long posAllowance){
        super(id, name, yearOfBirth, level,basicSalary);
        this.trainingSchools = trainingSchools;
        this.technique = technique;
        this.posAllowance = posAllowance;
    }

    public EmployeeManage(){
        super();
        this.trainingSchools = null;
        this.technique = null;
        this.posAllowance = 0l;
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

    public long getPosAllowance() {
        return posAllowance;
    }

    public void setPosAllowance(long posAllowance) {
        this.posAllowance = posAllowance;
    }

    @Override
    public long getSalary() {
        return super.getSalary() + (posAllowance);
    }

    @Override
    public String toString() {
        return "NhanVienQuanLy : " + super.toString() +
                ", training schools= '" + trainingSchools + '\'' +
                ", technique= '" + technique + '\'' +
                ", position allowance= " + posAllowance ;
    }

}
