public class Scorpio implements ICar{
    @Override
    public void accept(ICarVisitor carVisitor) {
        System.out.println("I am inside scopio accept method !");
        carVisitor.visitScorpio(this);
    }   
}
