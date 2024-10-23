package Interfaces;

public abstract class ParkingSpot {
    private int id;
    private boolean isFree;
    private Vehicle vehicle;
    
    public abstract boolean getIsFree();
}
