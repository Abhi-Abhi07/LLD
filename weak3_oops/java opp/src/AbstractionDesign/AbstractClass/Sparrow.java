

abstract class Bird {
    public Bird(){}
    abstract void fly();
    abstract void eat();
    public void generic(){
        System.out.println("All are bird");
    }
}

public class Sparrow extends Bird {
    public Sparrow(){}
    @Override
    public void fly() {
        System.out.println("Sparrow flying");
    }

    @Override
    public void eat() {
        System.out.println("Sparrow eating");
    }
}