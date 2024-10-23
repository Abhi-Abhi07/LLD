public class ScorpioN extends AbstarctScorpio{

    // AbstactScorpioImpl scorpioImpl;

    public ScorpioN(AbstactScorpioImpl scorpioImpl){
        super(scorpioImpl);
    }

    public void saftyReq(){
        scorpioImpl.saftyReq();
    }
    public boolean isRightHanded(){
        return scorpioImpl.isRightHanded();
    }
}
