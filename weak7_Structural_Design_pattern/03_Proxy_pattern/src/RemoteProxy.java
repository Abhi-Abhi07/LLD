public class RemoteProxy implements ICar {
    
    RemoteControlScorpio rcScorpio=new RemoteControlScorpio();

    public void leftTurn(){
        System.out.println("In RemoteProxy left turn ...");
        rcScorpio.leftTurn();
    }

    public void rightTurn(){
        System.out.println("In RemoteProxy right turn ...");
        rcScorpio.rightTurn();
    }

    public void goStraigth(){
        System.out.println("In RemoteProxy go straigth ...");
        rcScorpio.goStraigth();
    }

    public void goBack(){
        System.out.println("In RemoteProxy go back ...");
        rcScorpio.goBack();
    }
}
