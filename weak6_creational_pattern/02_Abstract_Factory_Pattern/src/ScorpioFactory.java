import Models.IEngine;
import Models.ScorpioEngine;

public class ScorpioFactory implements IVehicalFactory {
    public IEngine createEngine(){
        System.out.println("Scorpio ka engine bna rha hu !");
        return new ScorpioEngine();
    }
}
