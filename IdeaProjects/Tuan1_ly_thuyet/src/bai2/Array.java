package bai2;


import java.util.Arrays;
import java.util.Scanner;

public class Array {
    private int numberElements;
    private int[] array;
    private int size;
    public Array(int numberOfElements , int size){
        this.numberElements = numberOfElements;
        this.array = new int[size];
        this.size = size;
    }
    public Array(){
        this.array = new int[size];
    }
    public int getNumberOfElements() {
        return numberElements;
    }
    public int[] getArray() {
        return array;
    }
    public void setArray(int[] array) {
        this.array = array;
    }
    public int getSize() {
        return size;
    }
    public void setSize(int size) {
        this.size = size;
    }
    public void setNumberOfElements(int numberElements) {
        do{
            this.numberElements = numberElements;
            if(numberElements > this.size){
                System.out.println("Invalid");
            }
        }while(numberElements > this.size);
    }
    public void input(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter size : ");
        this.size = input.nextInt();
        System.out.print("Enter number of elements : ");
        do{
            this.numberElements = input.nextInt();
            if(this.numberElements > this.size){
                System.out.println("Invalid");
            }
        }while( this.numberElements > size);

        this.array = new int[size];
        System.out.println("Input array : ");

        for(int i = 0 ; i < this.numberElements ; i++){
            this.array[i] = input.nextInt();
        }
    }
    public void output(){
        System.out.println("Size of array : " + this.size);
        System.out.println("Number of elements : " + this.numberElements);
        System.out.println("Element of array : ");

        for(int i = 0 ; i < this.numberElements ; i++){
            System.out.print(this.array[i] +"\t");
        }
    }
    public float Average(){
        int sum = 0 ;
        int count = 0 ;
        for(int elment : array){
            if(elment % 2 != 0){
                sum += elment;
                count++;
            }
        }
        return (float) sum /count;
    }
    public int findMaxElement(){
        int max = 0 ;
        for(int elment : array){
            if(elment > max){
                max = elment;
            }
        }
        return max;
    }
    public void sort(){
        for(int i = 0 ; i < numberElements-1; i++){
            for(int j = i+1 ; j < numberElements ; j++){
                if(array[i] > array[j]){
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
    @Override
    public String toString() {
        return "Array{" + "numberOfElements=" + numberElements + ", array=" + Arrays.toString(array) + ", size=" + size + '}';
    }
}
