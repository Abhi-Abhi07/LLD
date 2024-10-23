public class Director {
    ICarBuilder carBuilder;

    public Director(ICarBuilder builder){
        this.carBuilder=builder;
    }

    // Instruction
    public void ConstructCar(boolean neededMusicSystem){
        this.carBuilder.buildEngine();
        this.carBuilder.buildTyre();
        this.carBuilder.buildChassis();
        if(neededMusicSystem){
            this.carBuilder.buildMusicsystem();
        }
        this.carBuilder.buildBodyShall();
    }
}
