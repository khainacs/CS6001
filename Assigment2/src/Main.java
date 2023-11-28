import com.sun.security.auth.UnixNumericGroupPrincipal;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        /*
        * a) 101 + 0) / 3
         b) 3.0e-6 * 10000000.1
         c) true && true
         d) false && true
         e) (false && false) || (true && true)
         f) (false || false) && (true && true)
        */
        System.out.println("The value of specified expression 101 + 0 : 3 is: " + (101+0)/3);
        System.out.println("The value of specified expression 3.0e-6 * 10000000.1 is: " +  (3.0e-6 * 10000000.1));
        System.out.println("The value of specified expression true && true is: " +  (true && true));
        System.out.println("The value of specified expression false && true is: " +  (false && true));
        System.out.println("The value of specified expression (false && false) || (true && true) : 3 is: " +  ((false && false) || (true && true)));
        System.out.println("The value of specified expression (false || false) && (true && true) is: " +  ((false || false) && (true && true)));

        /*--------------------------------------------------------*/

        /* Exercise 2: Logical Operators */
        System.out.print("----------Exercise 2: Logical Operators---------- ");
        Scanner scanner = new Scanner(System.in);
        int number1, number2, number3, number4;
        System.out.print("enter the first number: ");
        number1 = scanner.nextInt();
        System.out.print("enter the second number: ");
        number2 = scanner.nextInt();
        System.out.print("enter the third number: ");
        number3 = scanner.nextInt();
        System.out.print("enter the four number: ");
        number4 = scanner.nextInt();
        if ((number1 == number2) && (number3 == number4) && (number1 == number4)){
            System.out.print("numbers are equal");
        }
        else {
            System.out.print("numbers are not equal");
        }

        /*-------------------------------------------------------------------*/

        /*Exercise 3: Arithmetic Operators
        *Write a Java program to add FIVE integers and display their sum.
        * */
        System.out.print("----------Exercise 3: Arithmetic Operators---------- ");
        int number5;
        System.out.print("enter the first number: ");
        number1 = scanner.nextInt();
        System.out.print("enter the second number: ");
        number2 = scanner.nextInt();
        System.out.print("enter the three number: ");
        number3 = scanner.nextInt();
        System.out.print("enter the four number: ");
        number4 = scanner.nextInt();
        System.out.print("enter the five number: ");
        number5 = scanner.nextInt();

        System.out.print("The sum is: : " + (number1 + number2 + number3 + number4 + number5));

        /* Exercise 4: Arithmetic Operators
            Specifications
            Write a Java programs, called CylinderComputation to print the surface area, base area, and volume of a  cylinder,
            given its radius and height (in doubles).
            You should use 5 double variables called radius, height, surfaceArea, baseArea and volume.
            Take note that  space (blank) is not allowed in variable names.*/
            double radius = 5.0; // Replace with the desired radius value.
            double height = 10.0; // Replace with the desired height value.
            double surfaceArea, baseArea, volume;

            // Calculate the surface area, base area, and volume of the cylinder.
            surfaceArea = 2 * Math.PI * radius * (radius + height);
            baseArea = Math.PI * Math.pow(radius, 2);
            volume = baseArea * height;

            // Print the results.
            System.out.println("Cylinder Properties:");
            System.out.println("Radius: " + radius);
            System.out.println("Height: " + height);
            System.out.println("Surface Area: " + surfaceArea);
            System.out.println("Base Area: " + baseArea);
            System.out.println("Volume: " + volume);
    }
}