public class AircraftOne {

    // private static AircraftOne aircraftInstance=null;
    private static AircraftOne aircraftInstance; //by default null hi hota hai

    private AircraftOne(){

    }

    public AircraftOne getInstance(){
        if(aircraftInstance==null){
            aircraftInstance = new AircraftOne();
        }
        return aircraftInstance;
    }
}