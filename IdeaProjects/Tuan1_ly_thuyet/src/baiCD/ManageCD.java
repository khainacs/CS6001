package baiCD;

public class ManageCD {

    public static void main(String[] args) {
        ListCD obj = new ListCD();
        System.out.println("Input");
        obj.input();
        System.out.println("Output");
        obj.output();
        obj.sort();
        obj.output();
    }
}
