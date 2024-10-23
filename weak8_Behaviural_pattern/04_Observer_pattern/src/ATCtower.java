import java.util.ArrayList;
import java.util.List;
public class ATCtower implements ISubject{


    List<IObserver> observers=new ArrayList<>();

    @Override
    public void addObserver(IObserver observer) {
        observers.add(observer);    
        System.out.println("Adding Observer ya subscribe in TOWER");
    }

    @Override
    public void removeObserver(IObserver observer) {
        observers.remove(observer);
        System.out.println("Removing Observer ya unsubscribe in TOWER");

    }

    @Override
    public void notifyObserver() {
        for (IObserver observer : observers) {
            // apply some condition or logic
            // notify aircraft
            observer.proceed(this);
        }
    }

    
}
