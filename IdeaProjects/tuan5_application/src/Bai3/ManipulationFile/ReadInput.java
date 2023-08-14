package Bai3.ManipulationFile;

import java.io.FileReader;
import java.util.ArrayList;
import java.util.Scanner;

public class ReadInput {
    private ArrayList<String> getInfoObject(String data)
    {
        ArrayList arr = new ArrayList<String>();
        String[] parts = data.split(":|,");
        for(String token: parts)
        {
            arr.add(token);
        }
        /*
        for (Object token: arr)
        {
            System.out.println(token);
        }
        */

        return arr;
    }
    public ArrayList readInfo()
    {
       ArrayList<ArrayList<String>> arr = new ArrayList<>();
        try {
            FileReader input = new FileReader("src/Bai3/File/data.txt");
            Scanner reader = new Scanner(input);
            int cnt = 0;
            while (reader.hasNextLine()) {
                String data = reader.nextLine();
                arr.add(getInfoObject(data));


            }
        }
        catch(Exception  e) {
            //System.out.println("Stupid!!!");
            e.printStackTrace();
        }
        return arr;
    } 
    
}
