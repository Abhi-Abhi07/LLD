import Models.IBodyShall;
import Models.IEngine;
import Models.ScapioEngine;
import Models.ScarpioBodyShall;

public class Scarpio {

    IEngine engine;
    IBodyShall bodyShall;

    public void makeScarpio(){
        System.out.println("ha bhai Scapio hi de rha hu !");
        engine=new ScapioEngine();
        bodyShall=new ScarpioBodyShall();
    }

    public void driveCar (){
        makeScarpio();
        System.out.println("I am driving Scapio");
    }
}
