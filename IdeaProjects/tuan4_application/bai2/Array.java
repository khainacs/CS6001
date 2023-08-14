package Java.tuan4_application.bai2;

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
    public void outputEmployee()
    {
        for (human object : arr) {
            if (object instanceof employee)
            {
                System.out.println(object.toString());
            }
        }
    }
}
