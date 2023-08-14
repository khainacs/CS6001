public class Circle extends Shape{
    private double radius;
    private final double PI = 3.14f;

    public Circle(double radius) {
        this.radius = radius;
    }
    public String getName()
    {
        return "hình tròn";
    }

    public double getRadius() {
        return radius;
    }

    public double area()
    {
        return Math.round((this.radius*this.radius*PI));
    }
    public double paremeter()
    {
        return Math.round((this.radius*2*PI));
    }
}
