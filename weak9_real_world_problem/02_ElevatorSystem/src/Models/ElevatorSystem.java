package Models;

public class ElevatorSystem {
    private Building building;

    public void monitering(){

    }

    public void dispatcherAlgo(){

    }

    // Singleton pattern
    private static ElevatorSystem elevatorSystemInstance=null;

    public static ElevatorSystem getInstance(){
        if(elevatorSystemInstance==null){
            elevatorSystemInstance=new ElevatorSystem();
        }
        return elevatorSystemInstance;
    }

    //TODO: Add your utility or function that a elevator system should have, below
}
