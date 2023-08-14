package org.example.Lab1;

import java.util.*;

public class Array {
    private ArrayList<Employee> list;
    private Scanner input = new Scanner(System.in);
    public Array(){
        this.list = new ArrayList<Employee>();
    }

    public Array(ArrayList<Employee> list){
        this.list = list;
    }

    public <T> void inputInfo (T obj) {
        System.out.print("Enter id : ");
        String id = input.nextLine();
        System.out.print("Enter name : ");
        String name = input.nextLine();
        System.out.print("Enter year of birth : ");
        String yearOfBirth = input.nextLine();
        System.out.print("Enter level : ");
        String level = input.nextLine();
        System.out.print("Enter basic salary : ");
        long basicSalary = input.nextLong();
        input.nextLine();
        if(obj instanceof EmployeeManage){
            System.out.print("Enter training school : ");
            String trainingSchool = input.nextLine();
            System.out.print("Enter technique : ");
            String technique = input.nextLine();
            System.out.print("Enter position allowance : ");
            long posAllowance = input.nextLong();
            input.nextLine();
            EmployeeManage nv =  new EmployeeManage(id,name,yearOfBirth,level,basicSalary,
                    trainingSchool,technique,posAllowance);
            this.list.add(nv);
        }
        if(obj instanceof EmployeeScientist){
            System.out.print("Enter training school : ");
            String trainingSchool = input.nextLine();
            System.out.print("Enter technique : ");
            String technique = input.nextLine();
            System.out.print("Enter position allowance : ");
            long toxicAllowance = input.nextLong();
            input.nextLine();
            EmployeeScientist nv =  new EmployeeScientist(id,name,yearOfBirth,level,basicSalary,
                    trainingSchool,technique,toxicAllowance);
            this.list.add(nv);
        }
        if(obj instanceof Waiter){
            Waiter nv = new Waiter(id,name,yearOfBirth,level,basicSalary);
            this.list.add(nv);
        }
    }

    private void title(){
        System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-22s | %-21s | %-15s | %8s | %6s | %6s | ",
                           "ID","Name","Year Of Birth","Level","Training Schools","Technique","Job",
                "Basic salary","Position Allowance","Toxic Allowance");
        System.out.println();
    }
    public void output(){
        title();
        for(Employee nv : list){
            if( nv instanceof EmployeeManage){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-22s | %-21s | %-15s | %-12s | " +
                                "%-18s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(),
                        ((EmployeeManage) nv).getTrainingSchools(),
                        ((EmployeeManage) nv).getTechnique(),
                        "Manage Staff",nv.getBasicSalary(),
                        ((EmployeeManage) nv).getPosAllowance(),"null");
                System.out.println();
            }
            if( nv instanceof EmployeeScientist){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-22s | %-21s | %-15s | %-12s |" +
                                " %-18s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(),
                        ((EmployeeScientist) nv).getTrainingSchools(),
                        ((EmployeeScientist) nv).getTechnique(),
                        "Research Staff",nv.getBasicSalary(),"null",
                        ((EmployeeScientist) nv).getToxicAllowance());
                System.out.println();
            }
            if( nv instanceof Waiter){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-22s | %-21s | %-15s | %-12s | " +
                                "%-18s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(),"null","null","Staff",
                        nv.getBasicSalary(),"null","null");
                System.out.println();
            }
        }
    }

    public void sort(){
        Collections.sort(this.list, new Comparator<Employee>() {
            @Override
            public int compare(Employee o1, Employee o2) {
                return Long.compare(o1.getSalary(),o2.getSalary());
            }
        });
    }
    private void titlePayroll(){
        System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-21s | %-15s | ",
                "ID","Name","Year Of Birth","Level","Job","Total Salary");
        System.out.println();
    }

    public void showSalaryTable(){
        sort();
        titlePayroll();
        for(Employee nv : list){
            if( nv instanceof EmployeeManage){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-21s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(), "Manage Staff",
                        nv.getSalary());
                System.out.println();
            }
            if( nv instanceof EmployeeScientist){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-21s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(), "Research Staff",
                        nv.getSalary());
                System.out.println();
            }
            if( nv instanceof Waiter){
                System.out.printf("| %-4s | %-25s | %-20s | %-10s | %-21s | %-15s |",
                        nv.getId(),nv.getName(),nv.getYearOfBirth(),nv.getLevel(), "Staff",
                        nv.getSalary());
                System.out.println();
            }
        }
    }

}
