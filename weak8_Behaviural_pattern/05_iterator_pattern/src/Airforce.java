import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
public class Airforce {
    
    List<IAircraft> jets=new ArrayList<>();
    IAircraft[] helicopter=new Chinook[2];
    List<IAircraft> cargo=new LinkedList<>();

    public Airforce(){
        jets.add(new Tejas());
        helicopter[0]=new Chinook();
        cargo.add(new Boeing());
    }

    public List<IAircraft> getJets(){
        return jets;
    }
    public IAircraft[] getHelicopter(){
        return helicopter;
    }
    public List<IAircraft> getCargo(){
        return cargo;
    }

    public ICustomIterator createIterator(){
       return new AirforceIterator(this);
    }
}
