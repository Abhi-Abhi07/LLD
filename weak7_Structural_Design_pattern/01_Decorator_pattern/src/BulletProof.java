public class BulletProof extends ScorpioDecorator {

    ICar carScorpio;

    public BulletProof(ICar myScorpio){
        this.carScorpio=myScorpio;
    }

    public void start(){
        carScorpio.start();
    }

    public void stop(){
        carScorpio.stop();
    }

    public float getWeight(){
        return 1000f+carScorpio.getWeight();
    }
}
