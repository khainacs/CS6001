import java.io.*;
import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        /* get data from file
           initializing arr variable to save data from file
        * */

        Vector<Integer> arr = new Vector<Integer>();
        BufferedReader br = new BufferedReader(new FileReader("C:\\Users\\khain\\IdeaProjects\\Assignment1\\src\\inputFile.txt"));
       try{
           StringBuilder sb = new StringBuilder();
           String line = br.readLine();
           while(line != null){
                arr.add(Integer.parseInt(line));
                line = br.readLine();
           }

       }catch (IOException e){
           System.out.println("Not found");
           e.printStackTrace();
       }

        /*
        * I initialize object MergeSort and vector answer
        *  pass parameter for constructor
        * print sequence numbers after sorting
         */

        MergeSort sort = new MergeSort(arr);
        Vector<Integer> answer = new Vector<Integer>();
        answer = sort.doWork(answer, 0, arr.size() -1);

        System.out.println("The array after sorting:  ");
        for (int i: answer) {

            System.out.print(i + " ");
        }

        System.out.println("\n\nThe largest number in array is " + answer.get(answer.size() - 1));
        System.out.println("\nthe second largest number in array is " + answer.get(answer.size()-2));

    }
}