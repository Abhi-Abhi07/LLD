public interface ICar {

    // ye bahut importance function hai Double Dispatch ke POV se
    public void accept(ICarVisitor carVisitor);
}
