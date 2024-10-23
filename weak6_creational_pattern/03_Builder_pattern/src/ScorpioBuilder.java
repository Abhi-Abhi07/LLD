import Models.ICar;
import Models.Scorpio;

public class ScorpioBuilder implements ICarBuilder {

    Scorpio obj;

    public void buildEngine(){
        // obj engine=new ScorpioEngine();
        System.out.println("Engine done");
    }

    public void buildMusicsystem(){
        // obj music=new ScorpioMusic();
        System.out.println("Music system done");
    }

    public void buildChassis(){
        // obj chassis=new ScorpioChassis();
        System.out.println("Chassis done");
    }

    public void buildTyre(){
        // obj Tyre=new ScorpioTyre();
        System.out.println("Tyre done");
    }

    public void buildBodyShall(){
        System.out.println("BodyShall done");
    }

    public ICar build(){
        System.out.println("Scorpio ready hai, le jao !");
        return obj;
    }
}
