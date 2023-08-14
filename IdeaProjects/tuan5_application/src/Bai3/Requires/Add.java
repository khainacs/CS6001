package Bai3.Requires;


import Bai3.EmployeeManage;
import Bai3.Student;
import Bai3.Teacher;

public class Add {
    public Student addStudent()
    {
        Student obj = new Student();
        obj.input();
        return obj;
    }
    public Teacher addTeacher()
    {
        Teacher obj = new Teacher();
        obj.input();
        return obj;
    }
    public EmployeeManage addManage()
    {
        EmployeeManage manage = new EmployeeManage();
        manage.input();
        return manage;
    }
}
