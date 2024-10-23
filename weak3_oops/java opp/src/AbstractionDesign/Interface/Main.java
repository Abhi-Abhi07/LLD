package AbstractionDesign.Interface;

public class Main {
    public static void main(String[] args) {
        Bird s=new Sparrow();
        s.eat();
        s.fly();
        Bird.generic();
        Bird e=new Eagle();
        doStuff(e);
        doStuff(new Eagle());
    }
    public static void doStuff(Bird b) {
        b.fly();
        b.eat();
    }
}
