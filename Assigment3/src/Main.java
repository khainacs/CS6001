import fa.training.entities.Student;
import fa.training.main.PersonManage;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Scanner;

public class Main {
    private static final String getData = "get data";
    private static final String updateStudent = "Update Student";
    private static final String displayTeacher = "Display Teacher";
    private static final String report = "Report";
    private static final String showObject = "Show student and teacher";
    private static final String exit = "Exit";

    /**
     * @param str, options in menu that you want
     * @return Map<Interger, String>, other meaning that map is your menu
     */
    public static Map<Integer, String> setMenu(String... str){
        if(str == null) return null;
        Map<Integer, String> setMenu = new HashMap<Integer, String>();
        for(int i = 0; i < str.length; i++){
            setMenu.put(i+1, str[i]);
        }
        return setMenu;
    }

    /**
     * Display your menu
     */
    public static void menu(Map<Integer, String> option){
        if(option == null) return;
        for (Map.Entry<Integer, String> i: option.entrySet()) {
            System.out.println(i.getKey() + ". " + i.getValue());
        }
    }
    public static void main(String[] args) {
        PersonManage manage = new PersonManage();
        Scanner scanner = new Scanner(System.in);
        boolean isExit = false;
        int chooseOption = 0;
        Map<Integer, String> setOption = setMenu(getData,updateStudent, displayTeacher, report, showObject, exit);
        do{

            System.out.println("------------MANAGE STUDENT--------------");
            menu(setOption);

            System.out.println("Which option do you want ? ");
            chooseOption = scanner.nextInt();
            switch (chooseOption){
                case 1: manage.inputDataFromFile();
                    break;
                case 2: System.out.println("enter the id which student, you want update ?");
                        int index = scanner.nextInt();
                        manage.updateStudent(index);
                    break;
                case 3: manage.displayTeacher();
                    break;
                case 4: manage.report();
                    break;
                case 5: manage.showObject();
                        break;
                case 6: isExit = true;
                    break;
            }
        }while (isExit != true);
    }
}