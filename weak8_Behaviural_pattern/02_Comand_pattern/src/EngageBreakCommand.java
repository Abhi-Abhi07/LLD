

public class EngageBreakCommand implements ICommand{
    
    BreakMechanism breakMechanism;
    
    public EngageBreakCommand(BreakMechanism breakii){
        this.breakMechanism=breakii;
    }

    public void execute(){
        breakMechanism.applyBreak();
    }
    
}
