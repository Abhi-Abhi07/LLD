public class Main {
    public static void main(String[] args) {
        Bird b=new Sparrow();
        b.fly();
        b.eat();
        b.generic();
        Bird e=new Eagle();
        doStuff(e);
        doStuff(new Eagle());
    }
    public static void doStuff(Bird b) {
        b.fly();
        b.eat();
        b.generic();
    }
}
