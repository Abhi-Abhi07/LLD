package Models;

import java.util.Map;

import Interfaces.Vehicle;

public class ParkingLotSystem {
    private int id;
    private String name;
    private String address;
    private final int MAX_CAPACITY=40000;
    private Map<String, Entrance>entrance;
    private Map<String, Exit>exit;
    private ParkingRate parkingRate;
    private Map<String, DisplayBoard>displayBoard;
    private Map<String, ParkingTicket>parkingTicket;

    // instance
    private static ParkingLotSystem parkingLot=null;

    // Singleton Design pattern
    private ParkingLotSystem(){
        // add your impl
    }

    // getInstance
    public static ParkingLotSystem getInstance(){
        // TODO : will this work in multi-threaded environment
        if(parkingLot==null){
            parkingLot=new ParkingLotSystem();
        }
        return parkingLot;
    }

    public ParkingTicket getParkingTicket(Vehicle vehicle){
        // add your impl
        return null; 
    }

    public boolean isFull(){
        // add your logic
        return true;
    }

    public boolean addEntrance(Entrance entrance){
        // add logic or impl
        return true;
    }

    public boolean addExit(Exit exit){
        // add impl
        return true;
    }

    // add more method 



    
}
