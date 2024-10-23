public class Terjas implements IAircraft{
    
    // intrinsic properties
    private final String name="Tejas";
    private final String dimension="15m long 10m wide";
    private final String wingSpan="40 feet";
    private final int seater=2;
    
    // extrinsic properties
    public int getTotalTimeToReachDestn(int srcX, int srcY,int destX,int destY,int speed){
        return 25;
    }
}
