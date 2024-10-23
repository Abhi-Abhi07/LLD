import java.util.ArrayList;
import java.util.List;

public class ATCTower {
    
    List<IAircrfat> queueForLanding=new ArrayList<>();

    public boolean requestToLanding(IAircrfat aircrfat){
        if(queueForLanding.size()==0){
            queueForLanding.add(aircrfat);
            return true;
        }else if(queueForLanding.size()>0 && queueForLanding.get(0)==aircrfat){
            return true;
        }
        else{
            queueForLanding.add(aircrfat);
            return false;
        }
    }

    public boolean requestToTakeOff(IAircrfat aircrfat){
        // check environment condtion
        // check aircraft runway per hai ya nhi
        // if all set or clear
        // then give permission
        if(queueForLanding.size()>0 && queueForLanding.get(0)==aircrfat){
            queueForLanding.remove(aircrfat);
            return true;
        }else{
            return false;
        }

    }
}
