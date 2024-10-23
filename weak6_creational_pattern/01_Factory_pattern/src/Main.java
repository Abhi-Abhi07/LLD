import java.util.ArrayList;
import java.util.Collection;

public class Main {

    public static void main(String[] args) {

        // Bad
        // ScarpioN scarpioN=new ScarpioN();
        // scarpioN.driveCar();
        // ScarpioClassic scarpioClassic=new ScarpioClassic();
        // scarpioClassic.driveCar();

        // Good
        // Scarpio scarpioN=new ScarpioN();
        // scarpioN.driveCar(); 
        // Scarpio scarpioClassic=new ScarpioClassic();
        // scarpioClassic.driveCar();


        // SimpleFactory->Kind of factory pattern not a complete Factory pattern
        // ScarpioFactory factory=new ScarpioFactory();
        // Scarpio car1=factory.createScarpio('N');
        // car1.driveCar();
        // Scarpio car2=factory.createScarpio('R');
        // car2.driveCar();


        Collection<Scarpio> list=new ArrayList<>();
        Scarpio car1=new ScarpioN();
        Scarpio car2=new ScarpioClassic();
        list.add(car1);
        list.add(car2);
        for (Scarpio car : list) {
            car.driveCar();
        }
    }
    
}