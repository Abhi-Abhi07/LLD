package Inheritance.Transport;

public class vehicle {
    public String name;
    public String model;
    public int noOfTyers;

    private int highspeed;

    protected int oil;

    public vehicle(){}
    // public vehicle(){
    //     this.name="";
    //     this.model="";
    //     this.noOfTyers=-1;
    // }
    public vehicle(String name, String model, int noOfTyers,int highspeed){
        System.out.println("Vehivle ctor called !");
        this.name=name;
        this.model=model;
        this.noOfTyers=noOfTyers;
        this.highspeed=highspeed;
    }
    
    public void setHighSpeed(int highspeed){
        this.highspeed=highspeed;
    }
    public int getHighSpeed(){
        return this.highspeed;
    }
    public void startEngine(){
        System.out.println("Engine starting for : "+name+" "+model);
    }

    public void stopEngine(){
        System.out.println("Engine stopping for : "+name+" "+model);
    }
}
