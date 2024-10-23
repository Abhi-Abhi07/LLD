package Polymophism;
public class Main{
    public static void main(String[] args) {
        // // method overrinding
        // Shape s=new Shape();
        // s.draw();
        // Circle c=new Circle();
        // c.draw();
        // Rectangle r=new Rectangle();
        // r.draw();

        // // upcasting
        // Shape s=new Rectangle();
        // s.draw();

        // Circle c=new Circle();
        // drawStuff(c);

        // downcasting
        Circle c1=(Circle)new Shape();
        c1.draw();
        // Shape s=new Shape();
        // drawStuff(s);
    }
    public static void drawStuff(Shape s){
        // s.draw();
        Circle c= (Circle)s;
        c.draw();
    }
}