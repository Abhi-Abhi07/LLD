package LLD.weak5_solid_principle.LSP;

public class Main {
    public static void main(String[] args) {
        Bird o=new Ostrich();
        doSomthing(o);
        Bird s=new Sparrow();
        doSomthing(s);
        
    }
    public static void doSomthing(Bird b) {
        b.eat();
        // Type checking is anti Abstraction
        // if(!(b instanceof Ostrich)){
        //     b.fly();
        // }
        b.fly();
    }
}
