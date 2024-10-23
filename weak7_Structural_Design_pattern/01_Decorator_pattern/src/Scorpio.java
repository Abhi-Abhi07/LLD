public class Scorpio implements ICar{

    @Override
    public void start() {
        System.out.println("Starting scorpio !");
    }

    public void stop(){
        System.out.println("Stoping Scorpio !");
    }

    public float getWeight(){
        return baseWeight;
    }
}
