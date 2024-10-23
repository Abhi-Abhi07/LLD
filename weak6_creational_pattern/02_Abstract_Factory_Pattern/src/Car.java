import Models.IEngine;
import java.util.Calendar;
public class Car{

    IEngine engine; 

    IVehicalFactory carFactory;

    public Car(IVehicalFactory carFactory){
        this.carFactory=carFactory;
    }

    public void driveCar(){
        engine=carFactory.createEngine();
        System.out.println("MILgyi gadi ab chillll maro !");
    }
}
