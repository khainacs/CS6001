package fa.training.problem02;

import java.util.Vector;

public class SpecialSort {
    private static void divideTwoPart(int arr[], int length){
        Vector<Integer> left = new Vector<Integer>();
        Vector<Integer> right = new Vector<Integer>();
        int pointLeft = 0;
        int pointRight = 0;
        for (int i: arr) {
            if(i == 0) {
                continue;
            }
            if (i % 2 == 0){
                right.add(i);
                pointRight++;
            }
            else {
                left.add(i);
                pointLeft++;
            }
        }
        bubbleSort1(left);
        bubbleSort(right);

        int[] newArray = new int[length];
        int index = 0;
        //mergeTwo array to new array
        for(int i = 0; i < pointLeft; i++){
            if(left.get(i) != 0) {
                newArray[index] = left.get(i);
                index++;
            }
        }
        for (int i = 0; i < pointRight; i++){
            if(right.get(i) != 0){
                newArray[index] = right.get(i);
                index++;
            }

        }

        System.out.println();
        for (int i = 0; i < newArray.length; i++) {
            System.out.print(newArray[i] + " ");
        }

    }
    public static void bubbleSort1(Vector<Integer> arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size() ; j++) {
                if (arr.get(i) < arr.get(j)) {
                    int temp = arr.get(i);
                    arr.set(i,  arr.get(j)) ;
                    arr.set(j, temp);

                }
            }


        }
    }
    public static void bubbleSort(Vector<Integer> arr) {

        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {

                if (arr.get(i) > arr.get(j)) {
                    int temp = arr.get(i);
                    arr.set(i,  arr.get(j)) ;
                    arr.set(j, temp);

                }
            }
        }
    }
    public static void display(int arr[]) {
        int i;
        System.out.print("[");

        for (i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.print("]\n");
    }

    public static void inputArray(){
        int[] arr = {3, 5, 6, 2, 8};
        divideTwoPart(arr, arr.length);
        int[] arr1 = {3, 5, 9, 7, 1, 8};
        divideTwoPart(arr1, arr1.length);
        int[] arr2 = {2, 4, 8, 6, 1, 9};
        divideTwoPart(arr2, arr2.length);
        int[] arr3 = {2, 4, 3, 5, 1, 9};
        divideTwoPart(arr3, arr3.length);
        int[] arr4 = {8, 4, 6, 2, 20, 100};
        divideTwoPart(arr4, arr4.length);

    }
}
