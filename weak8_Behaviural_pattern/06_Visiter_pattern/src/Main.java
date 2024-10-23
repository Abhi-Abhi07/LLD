import java.util.Iterator;

public class Main {
    public static void main(String[] args) {
        System.out.println("Process start ....");
        
        // visitor example link
        // https://www.javagists.com/java-visitor-design-pattern

        Fleet fleet=new Fleet();
        // first dispatch
        ICar scorpio=new Scorpio();
        fleet.addCars(scorpio);
        ICar alto=new Alto();
        fleet.addCars(alto);

        Iterator <ICar> cars=fleet.getIterratorCars();
        // second dispatch
        ICarVisitor insurancePriceVisitor=new InsurancePriceVisitor();

        while(cars.hasNext()){
            cars.next().accept(insurancePriceVisitor);
        }
    }
}
