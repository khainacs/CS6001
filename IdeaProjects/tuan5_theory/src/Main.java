// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        ArrayInt arr = new ArrayInt(4);
        arr.inputScreen();
        arr.outScreen();
        System.out.println();
        arr.outScreen(arr.insert(3, 11));
    }
}