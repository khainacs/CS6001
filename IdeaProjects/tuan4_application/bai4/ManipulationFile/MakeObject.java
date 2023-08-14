package Java.tuan4_application.bai4.ManipulationFile;

import Java.tuan4_application.bai4.Objects.*;

import java.util.ArrayList;

public class MakeObject {

    public Student makeStudent(ArrayList<String> data)
    {
        Student obj = new Student(data.get(1), data.get(2), Float.parseFloat(data.get(3)),
                Float.parseFloat(data.get(4)), Float.parseFloat(data.get(5)));
        return obj;
    }

    public Teacher makeTeacher(ArrayList<String> data)
    {
        Teacher obj = new Teacher(data.get(1), data.get(2), Long.parseLong(data.get(3)),
                data.get(4), data.get(5), data.get(6), data.get(7), data.get(8),
                data.get(9), Long.parseLong(data.get(10)));
        return obj;
    }
    public EmployeeManage makeManage(ArrayList<String> data)
    {
        EmployeeManage obj = new EmployeeManage(data.get(1), data.get(2), Long.parseLong(data.get(3)),
                data.get(4), data.get(5), data.get(6), data.get(7), data.get(8),
                data.get(9), Long.parseLong(data.get(10)));
        return obj;
    }
    public  ArrayList<ArrayList<String>> getInfo()
    {
        ReadInput input = new ReadInput();
        return input.readInfo();
    }
    public ArrayList<Human> makeObject(ArrayList<Human> arrObject)
    {
        ArrayList<ArrayList<String>> arrInfor = new ArrayList<>();
        arrInfor = getInfo();
        for(ArrayList<String> row: arrInfor)
        {
            String nameObject = row.get(0);
            if (nameObject.equals("Student"))
            {
                arrObject.add(makeStudent(row));
            }
            else if (nameObject.equals("Teacher")) {
                arrObject.add(makeTeacher(row));
            }
            else
            {
                arrObject.add(makeManage(row));
            }
        }
        /*
        for (Object obj: arrObject)
        {
            System.out.println(obj.toString());
        }

         */
        return arrObject;
    }
}
