import Models.DefenderEngine;
import Models.IEngine;

public class DefenderFactory implements IVehicalFactory{
    public IEngine createEngine(){
        System.out.println("Defender ka engine bna rha hu !");
        return new DefenderEngine();
    }
}
