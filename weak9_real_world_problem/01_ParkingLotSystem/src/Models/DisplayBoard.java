package Models;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import Interfaces.ParkingSpot;

public class DisplayBoard {
    private int id;
    private Map<String,List<ParkingSpot>>parkingSpot;

    public DisplayBoard(int id){
        this.id=id;
        parkingSpot=new HashMap<>();
    }

    public void showFree(){

    }

    public void sendParkingFullNotification(){

    }

    public void addParkingSlot(String spotType, List<ParkingSpot> spots){
        // add your impl 
    }
}
