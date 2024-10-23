package Inheritance.Transport;

public class car extends vehicle {
    public int noOfDoors;
    public String transmissionType;

    public car(){}
    public car(String name, String model, int noOfTyers,int highspeed, int noOfDoors, String transmissionType){
        super(name, model, noOfTyers,highspeed);
        System.out.println("car ctor called !");
        this.noOfDoors=noOfDoors;
        this.transmissionType=transmissionType;
        super.oil=5;
    }
    
    public void startAC(){
        System.out.println("AC will be start : "+super.name+" "+super.oil+" "+super.getHighSpeed());
    }
}
