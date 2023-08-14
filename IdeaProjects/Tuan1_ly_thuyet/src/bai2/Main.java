package bai2;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Array array = new Array();

        System.out.println("enter input :  ");
        array.input();
        System.out.println("enter output : ");
        array.output();

        System.out.print("\nEnter new number of elements :");
        int newElement = input.nextInt();
        array.setNumberOfElements(newElement);

        System.out.println("Re_input array : ");
        int[] newArr = new int[newElement];
        for(int i = 0; i < newElement; i++){
            newArr[i] = input.nextInt();
        }
        array.setArray(newArr);

        System.out.println("\n \tOutput is : ");
        array.output();
        System.out.println("\nAvg of odd number : " + array.Average());
        System.out.println("Max value : " + array.findMaxElement());
        array.sort();
        System.out.println("Array after sort : ");
        for(int elm : array.getArray()){
            System.out.print(elm + "\t");
        }
        System.out.println("\nArray : "+array.toString());


    }
}