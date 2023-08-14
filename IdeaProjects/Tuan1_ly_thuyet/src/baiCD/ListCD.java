package baiCD;

import java.util.Scanner;

public class ListCD {
    private CD[] list ;
    private int numberCD;
    public ListCD() {
        list = new CD[this.numberCD];
    }
    public CD[] getList() {
        return list;
    }
    public void setList(CD[] list) {
        this.list = list;
    }
    public int getNumberOfCD() {
        return numberCD;
    }
    public void setNumber(int number) {
        this.numberCD = numberCD;
    }
    public void input(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number CD : ");
        this.numberCD = input.nextInt();
        this.list = new CD[this.numberCD];
        System.out.println("Enter information CD : ");
        for(int i = 0; i < this.numberCD ; i++) {
            CD temp = new CD();
            temp.input();
            list[i] = temp;
        }
    }
    public void output(){
        System.out.println("Number of CD : " + this.numberCD);
        System.out.println("Information of CD in list : ");
        for(CD item : list){
            item.output();
        }
    }
    public void sort(){
        for(int i = 0; i < this.numberCD-1; i++){
            for(int j = i + 1; j < this.numberCD; j++){
                if(list[i].getId() < list[j].getId()){
                    CD temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
    }
}