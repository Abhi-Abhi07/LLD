package Models.Account;

import Interfaces.Account;
import Interfaces.ParkingSpot;
import Models.Entrance;
import Models.Exit;

public class AdminAccount extends Account{

    // Admin Acc ki khud ki property
    public boolean addParkingSpot(ParkingSpot spot){
        // write your own impl
        return true;
    }
    public boolean removeParkingSpot(ParkingSpot spot){
        // write your own impl
        return true;
    }
    public boolean addEntrance(Entrance entrance){
        // write your own impl
        return true;
    }
    public boolean removeEntrance(Entrance entrance){
        // write your own impl
        return true;
    }
    public boolean removeExit(Exit exit){
        // write your own impl
        return true;
    }
    public boolean addExit(Exit exit){
        // write your own impl
        return true;
    }

    @Override
    public boolean resetPassword() {
        // add your own impl
        return true;
    }
    
}
