import Models.ICar;
public interface ICarBuilder {

    public void buildBodyShall();
    public void buildEngine();
    public void buildChassis();
    public void buildMusicsystem();
    public void buildTyre();
    public ICar build();
}