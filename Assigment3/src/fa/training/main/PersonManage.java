package fa.training.main;

import fa.training.entities.Person;
import fa.training.entities.Student;
import fa.training.entities.Teacher;
import fa.training.utils.Validator;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.lang.String;
import java.util.Scanner;
import java.util.Vector;

public class PersonManage {
    private final String url = "src\\input.txt";
    private final Vector<Person> listPerson;
    public PersonManage(){
        listPerson = new Vector<Person>();
    }

    /**
     * @param data from file input
     *      pass parameter to intalize object student
     *             after that add into listPerson
     */
    private void createStudent(String... data){

        Student student = new Student(data[1], data[2], data[3],
                            data[4] = !Validator.validateEmail(data[4]) ? null : data[4] , data[5],
                            !Validator.validGrade(data[6]) ? null : Double.parseDouble(data[6]) ,
                            !Validator.validGrade(data[7]) ? null : Double.parseDouble(data[7]));
        listPerson.add(student);
    }

    /**
     * @param data
     * pass parameter to intalize object teacher
     *      *             after that add into listPerson
     */
    private void createTeacher(String... data){
        Teacher teacher = new Teacher(data[1], data[2], data[3],
                                      data[4] = !Validator.validateEmail(data[4]) ? null : data[4],
                                      Double.parseDouble(data[5]) , Double.parseDouble(data[6]));
        listPerson.add(teacher);
        Person person = (Person) teacher;
        Teacher teacher1 = (Teacher) person;
    }
    /**
     * get data from file input.txt
     */
    public void inputDataFromFile(){
        try {
            BufferedReader reader = new BufferedReader(new FileReader(url));
            String line;
            while((line = reader.readLine()) != null){
                //split line from file into parts
                String[] parts = line.split(",");
                if(parts[0].equals("teacher")){
                    createTeacher(parts);
                }
                if (parts[0].equals("student")){
                    createStudent(parts);
                }

            }
            reader.close();
        }catch (IOException e){
            e.printStackTrace();
        }
    }

    /**
     * @param studentID
     */
    public void updateStudent(int studentID){
        for (Person person: listPerson) {
            if (person instanceof Student ){
                Student student = ((Student) person);
                if(student.getStudentID().equals(Integer.toString(studentID))){
                    System.out.println("Founded Successfully!!!!");
                    boolean isExit = false;
                    Scanner scanner = new Scanner(System.in);
                    double grade = 0;
                    do{
                        int chooseOption = 0;
                        System.out.println("-------Update Student--------");
                        System.out.println("-------1.Theory Grade--------");
                        System.out.println("-------2.Practice Grade--------");
                        System.out.println("-------3.Exit--------");
                        System.out.println("\n which option do you want ?");
                        chooseOption = scanner.nextInt();
                        switch (chooseOption){
                            case 1: System.out.println("Enter new theory grade ?");
                                grade = scanner.nextDouble();
                                student.setTheory(grade);
                                break;
                            case 2: System.out.println("Enter new practice grade ?");
                                grade = scanner.nextDouble();
                                student.setTheory(grade);
                                break;
                            case 3: isExit = true;
                                break;
                        }
                    }while (isExit != false);
                }
            }
        }
    }

    /**
     * displays information about teachers, who has a salary higher than 1000$.
     */
    public void displayTeacher(){
        for (Person person: listPerson) {
            if (person instanceof Teacher && ((Teacher) person).caculateSalary() > 1000){
                Teacher teacher = (Teacher) person;
                System.out.println(teacher.toString());
            }
        }
    }

    /**
     * display all students and their final mark, who qualify to pass the course (final mark >=
     * 6).
     */
    public void report(){
        for (Person person: listPerson){
            if(person instanceof Student){
                Student student = (Student) person;
                if(student.calculateFinalMark() >= 6){
                    System.out.println(student.toString());
                }
            }
        }
    }

    /**
     * display student and teacher
     */
    public void showObject(){
        for (Person person: listPerson){
            System.out.println(person.toString());
        }
    }

}
