package bai3;

public class Coodinate {
    private int x_Coodinate, y_Coodinate;
    public Coodinate(int i, int j)
    {
        this.x_Coodinate = i;
        this.y_Coodinate = j;
    }
    public Coodinate()
    {
        this.x_Coodinate = 0;
        this.y_Coodinate = 0;
    }
    public String add(Coodinate a, Coodinate b)
    {
        return "(" +  a.x_Coodinate + b.x_Coodinate + "," + a.y_Coodinate + b.y_Coodinate + ")";
    }
    public String Symmetry(Coodinate a)
    {
        return "(" + a.x_Coodinate + ", " + a.y_Coodinate*-1 + ")";
    }
    public String output()
    {
        return "(" + this.x_Coodinate + ", " + this.y_Coodinate*-1 + ")";
    }
}
