import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList arr = new ArrayList<Shape>();
        ReadInput reader = new ReadInput();
        arr = reader.read();
        for (int i = 0; i < arr.size(); i++) {
            int index = i+1;

            if (arr.get(i) instanceof  Square)
            {
                System.out.printf("| %-2d| %-20s| Cạnh=%-26.1f| Chu vi=%-6.1f| Diện tích=%-6.2f|",
                        index, ((Square) arr.get(i)).getName(), ((Square) arr.get(i)).getEdge(),
                        ((Square) arr.get(i)).paremeter(), ((Square) arr.get(i)).area());
                System.out.println();
            }
            else if (arr.get(i) instanceof  Circle)
            {
                System.out.printf("| %-2d| %-20s| Cạnh=%-26.1f| Chu vi=%-6.1f| Diện tích=%-6.2f|",
                        index, ((Circle) arr.get(i)).getName(), ((Circle) arr.get(i)).getRadius(),
                        ((Circle) arr.get(i)).paremeter(), ((Circle) arr.get(i)).area());
                System.out.println();
            }
            else
            {

                System.out.printf("| %-2d| %-20s| Chiều dài=%-2.1f, chiều rộng=%-5.1f| Chu vi=%-6.1f|" +
                                " Diện tích=%-6.2f|",
                        index, ((Rectangle) arr.get(i)).getName(), ((Rectangle) arr.get(i)).getLegth(),
                        ((Rectangle) arr.get(i)).getWide(),
                        ((Rectangle) arr.get(i)).paremeter(), ((Rectangle) arr.get(i)).area());
                System.out.println();
            }
        }
    }
}
