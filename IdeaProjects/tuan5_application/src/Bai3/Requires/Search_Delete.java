package Bai3.Requires;


import Bai3.EmployeeManage;
import Bai3.Human;
import Bai3.Student;
import Bai3.Teacher;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Search_Delete {
    public void SearchInfo(String nameSearch, ArrayList<Human> arrObject)
    {
        for(Human obj: arrObject)
        {
            String str = obj.toString();
            String[] parts = str.split(",");
            Pattern pattern = Pattern.compile(nameSearch, Pattern.CASE_INSENSITIVE);
            Matcher matcher = pattern.matcher(parts[0]);
            if (matcher.find())
            {
                System.out.println(obj.toString());
            }
        }
    }
    public void DeleteInfo(String nameSearch, ArrayList<Human> arrObject)
    {
        int position = 0;
        for(Human obj: arrObject)
        {
            String str = obj.toString();
            String[] parts = str.split(",");
            Pattern pattern = Pattern.compile(nameSearch, Pattern.CASE_INSENSITIVE);
            Matcher matcher = pattern.matcher(parts[0]);
            if (matcher.find())
            {
                for (int i = position++; i < arrObject.size() - 1; i++)
                {
                    arrObject.set(i, arrObject.get(i+1));
                }
            }
            position++;
        }
    }
}
