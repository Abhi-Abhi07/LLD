public class Main {
    public static void main(String[] args) {

        System.out.println("process start ....");

        IScorpioPrototype prototype=new Scorpio();

        // create a scopio N (Shallow copy)
        IScorpioPrototype scorpioN=prototype.clone();
        scorpioN.setEngine(new ScorpioNEngine());
        scorpioN.start();

        // create a Scorpio Classic (deep copy)
        IScorpioPrototype scopioClassic=prototype.clone();
        scopioClassic.start();
        scopioClassic.setEngine(new ScorpioClassicEngine());

        System.out.println("process End ....");
    }
}
