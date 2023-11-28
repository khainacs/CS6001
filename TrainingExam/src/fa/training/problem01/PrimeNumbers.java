package fa.training.problem01;

import java.sql.Array;
import java.util.Scanner;

public class PrimeNumbers {

    private static boolean validdation(int number){
        if (number < 2) return false;
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
    public static int[] listingAll(int inputNumber){
        int[] arr = new int[inputNumber];
        if(inputNumber < 2){
            return null;
        }
        int index = 0;
        for (int i = 0; i < inputNumber; i++) {
            if(validdation(i)){
                arr[index++] = i;
            }
        }
        return arr;
    }
    public static void printArray(int[] arr){
        for (int i : arr) {
            if (i == 0) break;
            System.out.print(i + " ");
        }
        System.out.println();
    }
    public static void inputNumber(){
        int[] arr = listingAll(100);
        int[] arr1 = listingAll(150);
        int[] arr3 = listingAll(200);
        printArray(arr);
        printArray(arr1);
        if(listingAll(1) == null)
        {
            System.out.println("null");
        }
        printArray(arr3);
    }
}
