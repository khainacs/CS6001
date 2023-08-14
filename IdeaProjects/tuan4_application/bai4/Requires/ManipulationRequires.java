package Java.tuan4_application.bai4.Requires;

import Java.tuan4_application.bai4.ManipulationFile.MakeObject;
import Java.tuan4_application.bai4.Objects.Human;
import Java.tuan4_application.bai4.Objects.Student;
import Java.tuan4_application.bai4.Objects.Teacher;

import javax.swing.*;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

public class ManipulationRequires {
    private int press;
    public void Manipulation(ArrayList<Human> arrObject)
    {
        Scanner enter = new Scanner(System.in);
        Add add = new Add();
        do
        {
            Menu menu = new Menu();
            menu.MenuRequires();;
            System.out.print("enter the option that do you want: ");
            press = enter.nextInt();
            switch (press)
            {
                case 1: {
                    arrObject.add(add.addStudent());
                    break;
                }
                case 2:{
                    arrObject.add(add.addManage());
                    break;
                }
                case 3: {
                    arrObject.add(add.addTeacher());
                    break;
                }
                case 4: {
                    Search_Delete option4 = new Search_Delete();
                    enter.nextLine();
                    System.out.print("enter the name that you want: ");
                    String name = enter.nextLine();
                    option4.SearchInfo(name, arrObject);
                    break;
                }
                case 5: {
                    Search_Delete option5 = new Search_Delete();
                    enter.nextLine();
                    System.out.print("enter the name that you want: ");
                    String name = enter.nextLine();
                    option5.DeleteInfo(name, arrObject);
                    break;
                }
                case 6: {
                    System.out.print("enter the position of object that you want to change: ");
                    int pos = enter.nextInt();
                    FixInfo fix = new FixInfo();
                    if(arrObject.get(pos-1) instanceof Student)
                    {
                        fix.fixStudent(pos, arrObject);
                    } else if (arrObject.get(pos-1) instanceof Teacher) {
                        fix.fixTeacher(pos, arrObject);
                    }
                    else
                    {
                        fix.fixManager(pos, arrObject);
                    }

                    break;
                }
                case 7:{
                    for (int i = 0; i < arrObject.size(); i++)
                    {
                        for(int j = i+1; j < arrObject.size(); j++)
                        {
                            String[] name1 = arrObject.get(i).getFullName().split(" ");
                            String[] name2 = arrObject.get(j).getFullName().split(" ");
                            //System.out.println(name1[2].toString() + " " + name2[2].toString());
                            int result = name1[2].compareTo(name2[2]);
                            if (result > 0)
                            {
                                Human tmp = arrObject.get(i);
                                arrObject.set(i,arrObject.get(j));
                                arrObject.set(j, tmp);
                            }
                        }
                    }
                    /*
                    Collections.sort(arrObject, new Comparator<Human>() {
                        @Override
                        public int compare(Human o1, Human o2) {
                            return String.C(o1.getFullName(), o2.getFullName());
                        }
                    });

                     */
                    break;
                }
                case 9:
                {
                    try (BufferedWriter writer = new BufferedWriter(
                                new FileWriter("bai4/File/data.txt"))){
                        for (Human obj: arrObject) {
                            String str = obj.toString();
                            if (obj instanceof Student){
                                writer.write("Student:"+str);
                                writer.newLine();
                            } else if (obj instanceof Teacher) {
                                writer.write("Teacher:"+str);
                                writer.newLine();
                            }else {
                                writer.write("Manager:"+str);
                                writer.newLine();
                            }
                        }
                    }catch(IOException e){
                        System.out.println("Stupid!!!");
                    }
                    break;
                }
                case 8: {
                    int cnt = 1;
                    for(Object token: arrObject)
                    {
                        System.out.println(cnt + ". "+token.toString());
                        cnt++;
                    }
                    break;
                }
                default: {
                    System.out.println("Do not have this option!!!");
                    break;
                }
            }

        }while(press != 0);
    }
    public void CenterSystem()
    {
        ArrayList<Human> arrObject = new ArrayList<>();
        MakeObject allObject = new MakeObject();
        arrObject = allObject.makeObject(arrObject);
        Manipulation(arrObject);
    }
}
