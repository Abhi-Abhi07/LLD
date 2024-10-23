package AbstractionDesign.Interface;

public class Eagle implements Bird{
    @Override
    public void fly() {
        System.out.println("Eagle flying");
    }

    @Override
    public void eat() {
        System.out.println("Eagle eating");
    }
}
