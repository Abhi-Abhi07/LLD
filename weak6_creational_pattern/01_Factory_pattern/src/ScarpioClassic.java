import Models.ScapioClassicEngine;
import Models.ScarpioClassicBodyShall;

public class ScarpioClassic extends Scarpio{

        public void makeScarpio(){
        System.out.println("ha bhai ScapioClassic hi de rha hu !");
        engine=new ScapioClassicEngine();
        bodyShall=new ScarpioClassicBodyShall();
    }

    public  void driveCar (){
        makeScarpio();
        System.out.println("I am driving Scarpioclassic");
    }
}
