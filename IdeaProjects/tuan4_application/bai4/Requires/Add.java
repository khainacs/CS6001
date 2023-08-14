package Java.tuan4_application.bai4.Requires;

import Java.tuan4_application.bai4.Objects.EmployeeManage;
import Java.tuan4_application.bai4.Objects.Student;
import Java.tuan4_application.bai4.Objects.Teacher;
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
