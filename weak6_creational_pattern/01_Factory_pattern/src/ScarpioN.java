import Models.ScapioNEngine;
import Models.ScarpioNBodyShall;

public class ScarpioN extends Scarpio{

    public void makeScarpio(){
        System.out.println("ha bhai ScapioN hi de rha hu !");
        engine=new ScapioNEngine();
        bodyShall=new ScarpioNBodyShall();
    }
    public  void driveCar (){
        makeScarpio();
        System.out.println("I am driving ScarpioN");
    }
}
