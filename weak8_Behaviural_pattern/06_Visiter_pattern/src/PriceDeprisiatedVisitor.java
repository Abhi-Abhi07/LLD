public class PriceDeprisiatedVisitor implements ICarVisitor{


    @Override
    public void visitScorpio(ICar scorpio) {
        System.out.println("Visiting price dep visitor scopio");
    }

    @Override
    public void visitAlto(ICar alto) {
        System.out.println("Visiting price deo visitor Alto");
    }
    
    
}
