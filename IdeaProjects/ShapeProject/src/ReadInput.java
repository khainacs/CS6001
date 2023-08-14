import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ReadInput {
    ArrayList<Shape> getTwoNumber(String data, ArrayList<Shape> arr)
    {
        final String regex = "Rectangle: w=([0-9]{1,}), h=([0-9]{1,})";
        Pattern number = Pattern.compile(regex, Pattern.MULTILINE );
        Matcher matcher = number.matcher(data);
        Rectangle twoNum = new Rectangle(0 , 0);
        if(matcher.find()) {
            twoNum = new Rectangle(Double.parseDouble(matcher.group(1)),
                                    Double.parseDouble(matcher.group(2)));
            //System.out.println(matcher.group(1) + " " + matcher.group(2));
        }
        arr.add(twoNum);
        return arr;
    }
    ArrayList<Shape> getOneNumber(String data, ArrayList<Shape> arr)
    {
        final String regexSquare = "Square: a=([0-9]{1,})";
        final String regexCircle = "Circle: r=([0-9]{1,})";
        Pattern patternSquare = Pattern.compile(regexSquare, Pattern.MULTILINE);
        Pattern patternCircle = Pattern.compile(regexCircle, Pattern.MULTILINE);
        Matcher matcherSquare = patternSquare.matcher(data);
        Matcher matcherCircle = patternCircle.matcher(data);
        if (matcherCircle.find())
        {
            Circle obj = new Circle(Double.parseDouble(matcherCircle.group(1)));
            //System.out.println(matcherCircle.group(1));
            arr.add(obj);
        }
        else if (matcherSquare.find())
        {
            Square obj = new Square(Double.parseDouble(matcherSquare.group(1)));
            //System.out.println(matcherSquare.group(1));
            arr.add(obj);
        }
        return arr;
    }
    public ArrayList read()
    {
        ArrayList<Shape> arr = new ArrayList<Shape>();
        try {
            FileReader input = new FileReader("Shape.txt");
            Scanner enter = new Scanner(input);
            String numberFirstLine = enter.nextLine();//read the first number in file
            //System.out.println(Integer.parseInt(numberFirstLine));
            while (enter.hasNextLine())
            {
                String data = enter.nextLine();
                //searching Rectangle
                Pattern patternRectangle = Pattern.compile("Rectangle", Pattern.MULTILINE);
                Matcher matcherRectangle = patternRectangle.matcher(data);
                //searching Circle
                Pattern patternCricle = Pattern.compile("Circle", Pattern.MULTILINE);
                Matcher matcherCircle = patternCricle.matcher(data);
                //Searching Circle
                Pattern patternSquare = Pattern.compile("Square", Pattern.MULTILINE);
                Matcher matcherSquare = patternSquare.matcher(data);
                if (matcherRectangle.find())
                {
                    getTwoNumber(data, arr);
                }
                else if (matcherCircle.find())
                {
                    getOneNumber(data, arr);
                }
                else if (matcherSquare.find())
                {
                    getOneNumber(data, arr);
                }
            }
            input.close();
        }catch (Exception ex)
        {
            System.out.println("file read error");
        }
        return arr;
    }
}
