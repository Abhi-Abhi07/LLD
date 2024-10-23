public class AirSuspensionCommand implements ICommand{
    AirSuspensionMechanism airSuspensionMechanism;
    
    public AirSuspensionCommand(AirSuspensionMechanism air){
        this.airSuspensionMechanism=air;
    }

    public void execute(){
        airSuspensionMechanism.liftSuspension();
    }
}
