package bai4;

public class Array {
    private Employee[] arr;
    private int len;
    public Array(int len)
    {
        this.len = len;
        this.arr = new Employee[len];
    }
    public void input()
    {
        for (int i = 0; i < len; i++) {
            arr[i] = new Employee();
            arr[i].input();
        }
    }
    public void output()
    {
        for (int i = 0; i < len; i++) {
            System.out.println(arr[i].toString() + "and salary" + arr[i].getSalary());
        }
    }
}
