public class InsurancePriceVisitor implements ICarVisitor{

    @Override
    public void visitScorpio(ICar scorpio) {
        System.out.println("Visiting insurance price visitor scopio");
    }

    @Override
    public void visitAlto(ICar alto) {
        System.out.println("Visiting insurance price visitor Alto");
    }
    
}
