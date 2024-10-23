public class Adapter implements ICar{

    HotAirBalloon hotAirBalloon;
    
    public Adapter(HotAirBalloon balloon){
        this.hotAirBalloon=balloon;
    }
    @Override
    public void start() {
        String gesToBeUsed=hotAirBalloon.getGasedUsed();
        hotAirBalloon.start(gesToBeUsed);
    }

}
