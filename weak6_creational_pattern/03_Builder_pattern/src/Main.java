import Models.ICar;

public class Main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");

        ICarBuilder builder=new ScorpioBuilder();
        Director director=new Director(builder); 

        // instruction
        director.ConstructCar(false);

        ICar car = builder.build();
    }
}
