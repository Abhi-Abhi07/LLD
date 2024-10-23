package Models;

import java.util.List;

public class Building {
    private List<Floor> floorList;
    private List<Elevator> elevatorList;

    // Singleton pattern
    private static Building buildingInstance=null;

    public static Building getInstance(){
        if(buildingInstance==null){
            buildingInstance=new Building();
        }
        return buildingInstance;
    }
}
