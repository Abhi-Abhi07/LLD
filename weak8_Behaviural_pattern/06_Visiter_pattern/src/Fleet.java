import java.util.ArrayList;
import java.util.List;

import java.util.Iterator;

public class Fleet {
    List<ICar> cars=new ArrayList<>();

    public Iterator<ICar> getIterratorCars(){
        return cars.iterator();
    }

    public void addCars(ICar car){
        cars.add(car);
    }
}
