public class Rectangle extends Shape {
    private double legth, wide;

    public Rectangle(double legth, double wide) {
        this.legth = legth;
        this.wide = wide;
    }

    public double getLegth() {
        return legth;
    }

    public double getWide() {
        return wide;
    }

    public double area()
    {
        return Math.round((this.legth*this.wide*100) /100);
    }
    public double paremeter()
    {
        return Math.round(((this.legth*this.wide) /2 *10) /10);
    }

    public String getName()
    {
        return "hình chữ nhật";
    }
}
