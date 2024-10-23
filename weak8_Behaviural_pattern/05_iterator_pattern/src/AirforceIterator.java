
import java.util.List;


public class AirforceIterator implements ICustomIterator{

    // main logic yaha rehaga, ki akise different type of data
    // joki airforce k ander ai usko same iterator se traverse kia ja sake

    List<IAircraft> jets;
    IAircraft[] helicopter;
    List<IAircraft> cargo;

    public int jetPos=0;
    public int helicopterPos=0;
    public int cargoPos=0;

    public AirforceIterator(Airforce airforce){
        jets=airforce.getJets();
        helicopter=airforce.getHelicopter();
        cargo=airforce.getCargo();
    }

    @Override
    public IAircraft next() {
        if(jets.size()>jetPos){
            return jets.get(jetPos++);
        }
        if(helicopter.length>helicopterPos){
            return helicopter[helicopterPos++];
        }
        if(cargo.size()>cargoPos){
            return cargo.get(cargoPos++);
        }
        // if next elements not available
        throw new RuntimeException("No more elements");
    }

    @Override
    public boolean hasNext() {
        return jetPos<jets.size() || cargoPos<cargo.size() || helicopterPos<helicopter.length;
    }

    


}
