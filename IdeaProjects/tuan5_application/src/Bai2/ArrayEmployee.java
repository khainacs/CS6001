package Bai2;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class ArrayEmployee {
    private ArrayList<Employee> arrEmployee = new ArrayList<Employee>();

    public ArrayEmployee() {
        this.arrEmployee = new ArrayList<Employee>();
    }
    void makeWaiters(String[] parts)
    {
        Waiters obj = new Waiters(parts[1], parts[2], parts[3], Long.parseLong(parts[4]));
        arrEmployee.add(obj);
    }
    void makeManager(String[] parts){
        Manager obj = new Manager(parts[1], parts[2], parts[3], Long.parseLong(parts[4]),
                parts[5], Long.parseLong(parts[6]));
        arrEmployee.add(obj);
    }
    void makeResearcher(String[] parts){
        Researcher obj = new Researcher(parts[1], parts[2], parts[3], Long.parseLong(parts[4]),
                parts[5], Long.parseLong(parts[6]));
        arrEmployee.add(obj);
    }
    String[] splitStr(String data)
    {
        String[] parts = data.split(":|,");
        if(parts[0].equals("Waiters"))
        {
            makeWaiters(parts);
        } else if (parts[0].equals("Manager")) {
            makeManager(parts);
        }
        else {
            makeResearcher(parts);
        }
        return parts;
    }
    public void readInput()
    {
        try {
            String path = "src/Bai2/File/data.txt";
            FileReader input = new FileReader(path);
            Scanner reader = new Scanner(input);
            while (reader.hasNextLine()) {
                String data = reader.nextLine();
                splitStr(data);
            }
        }
        catch(Exception  e) {
            //System.out.println("Stupid!!!");
            e.printStackTrace();
        }
    }
    void calcuSalaryArray()
    {
        for(Employee obj: arrEmployee)
        {
            System.out.println(obj.getName() + " salary:" + obj.calcuSalary());
        }
    }
    void Admin()
    {
        readInput();
        calcuSalaryArray();
    }
}
