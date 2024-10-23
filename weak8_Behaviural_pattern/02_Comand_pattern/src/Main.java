public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");

        BreakMechanism breakMechanism=new BreakMechanism();
        AirSuspensionMechanism airSuspensionMechanism=new AirSuspensionMechanism();

        EngageBreakCommand breakCmd=new EngageBreakCommand(breakMechanism);
        AirSuspensionCommand airCmd=new AirSuspensionCommand(airSuspensionMechanism);

        Penal btnPenal=new Penal();

        btnPenal.setCommand(0, breakCmd);
        btnPenal.setCommand(1, airCmd);

        btnPenal.liftSuspension();
        btnPenal.applyBreak();

    }
}
