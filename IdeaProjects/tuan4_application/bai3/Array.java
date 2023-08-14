package Java.tuan4_application.bai3;

import java.util.ArrayList;

public class Array {
    private ArrayList<human> arr;

    public Array() {
        this.arr = new ArrayList<human>();
    }
    public void inputArray(human obj)
    {
        this.arr.add(obj);
    }
    public void outputStudent()
    {
        for (human object : arr) {
            if (object instanceof student)
            {
                System.out.println(object.toString());
            }
        }
    }
    public void outputTeacher()
    {
        for (human object : arr) {
            if (object instanceof teacher)
            {
                System.out.println(object.toString());
            }
        }
    }
    public void outputEmployeeManage()
    {
        for (human object : arr) {
            if (object instanceof employeeManage)
            {
                System.out.println(object.toString());
            }
        }
    }
}
