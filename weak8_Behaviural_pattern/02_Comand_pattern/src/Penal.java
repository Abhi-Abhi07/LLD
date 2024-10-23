public class Penal {

    ICommand[] comands=new ICommand[5];
    
    public Penal(){

    }

    public void setCommand(int index,ICommand command){
        comands[index]=command;
    }

    public void applyBreak(){
        comands[0].execute();
    }

    public void liftSuspension(){
        comands[1].execute();
    }

}
