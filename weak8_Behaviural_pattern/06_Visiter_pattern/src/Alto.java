public class Alto implements ICar{
    public void accept(ICarVisitor carVisitor){
        System.out.println("I am inside alto accept method !");
        carVisitor.visitAlto(this);
    }
}
