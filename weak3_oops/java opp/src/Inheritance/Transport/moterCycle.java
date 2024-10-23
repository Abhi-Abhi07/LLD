package Inheritance.Transport;

public class moterCycle extends vehicle{
    public String handleBarStyle;
    public String suspenssionType;

    public moterCycle(){}

    public moterCycle(String name, String model, int noOfTyers,int highspeed,String handleBarStyle, String suspenssionType){
        super(name, model, noOfTyers,highspeed);
        System.out.println("mpterCycle ctor called !");
        this.handleBarStyle=handleBarStyle;
        this.suspenssionType=suspenssionType;
    }

    public void wheeli(){
        System.out.println(super.name+" are wheeli and suspenssionType "+this.suspenssionType);
    }
}
