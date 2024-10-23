public class Scorpio implements IScorpioPrototype{

    ScorpioEngine engine;
    public Scorpio(){
        // default engine set
        this.engine=new ScorpioEngine();
    }

    public Scorpio(ScorpioEngine scorpioEngine){
        // deep copy -> using copy ctor
        this.engine=new ScorpioEngine(scorpioEngine);
    }
    // clone 
    // shallow copy
    // public IScorpioPrototype clone(){
    //     return new Scorpio();
    // }

    // deep copy
    public IScorpioPrototype clone(){
        IScorpioPrototype cloneScorpio= new Scorpio(this.engine);
        return cloneScorpio;
    }

    // difference manage (hamare case me only engine diff)
    public void setEngine(ScorpioEngine eng){
        this.engine=eng;
    }

    public void start(){
        System.out.println("All are good !");
    }
}
