public abstract class AbstarctScorpio {
    
    // Bridge
    AbstactScorpioImpl scorpioImpl;

    public AbstarctScorpio(AbstactScorpioImpl scorpioImpl){
        this.scorpioImpl=scorpioImpl;
    }

    abstract void saftyReq();

    abstract boolean isRightHanded();
}
