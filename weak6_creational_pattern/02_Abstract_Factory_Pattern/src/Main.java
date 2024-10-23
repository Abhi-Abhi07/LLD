import java.util.ArrayList;
import java.util.Collection;

public class Main {
    public static void main(String[] args) {
        
        IVehicalFactory scarpioFactory=new ScorpioFactory();
        IVehicalFactory defenderFactory=new DefenderFactory();

        Car car1=new Car(scarpioFactory);
        Car car2=new Car(defenderFactory);

        Collection<Car> list=new ArrayList<>();
        list.add(car1);
        list.add(car2);

        for (Car car : list) {
            car.driveCar();
        }
    }
}
