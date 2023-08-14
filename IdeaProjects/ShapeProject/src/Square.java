public class Square extends Shape{
    private double edge;
    public Square(double edge)
    {
        this.edge = edge;
    }

    public double getEdge() {
        return edge;
    }

    public double area()
    {
        return Math.round((this.edge*2*100) /100);
    }
    public double paremeter()
    {
        return Math.round((this.edge*4*10) /10);
    }
    public String getName()
    {
        return "hình vuông";
    }
}
