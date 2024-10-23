import Models.ICar;
import Models.Fortuner;

public class FortunerBuilder implements ICarBuilder {

    Fortuner obj;

    public void buildEngine(){
        // obj.engine=new FortunerEngine();
        System.out.println("Engine done");
    }

    public void buildMusicsystem(){
        // obj.musicSystem=new FortunerMusicSystem();
        System.out.println("Music system done");
    }

    public void buildChassis(){
        // obj.Chassis=new FortunerChassis();
        System.out.println("Chassis done");
    }

    public void buildTyre(){
        // obj.tyre=new FortunerTyre();
        System.out.println("Tyre done");
    }

    public void buildBodyShall(){
        // obj.body=new FortunerBodyShall();
        System.out.println("BodyShall done");
    }

    public ICar build(){
        System.out.println("Fortuner ready hai, le jao !");
        return obj;
    }
}
