package LLD.weak5_solid_principle.ISP;

public class Main {
    public static void main(String[] args) {
        Sparrow s=new Sparrow();
        doEating(s);
        doFly(s);
        doSing(s);
        Ostrich o=new Ostrich();
        // doFly(o);
        // doSing(o);
        doEating(o);
        Piggon p=new Piggon();
        doFly(p);
        doEating(p);
        // doSing(p);
        Koel k=new Koel();
        doFly(k);
        doEating(k);
        doSing(k);
    }
    public static void doEating(Bird b) {
        b.eat();        
    }
    public static void doFly(Flying f){
        f.fly();
    }
    public static void doSing(Singing s){
        s.sing();
    }
}
