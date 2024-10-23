public class Tejas implements IObserver, IAircrfat{

    ISubject tower;

    public Tejas(ISubject tower){
        this.tower=tower;
    }

    @Override
    public void land() {
        System.out.println("Tejas land kar rha hai bhai ...");
        tower.removeObserver(this);
    }

    @Override
    public void takeOff() {
        tower.addObserver(this);        
        System.out.println("Tejas udddd rha hai bhaiiiiii !");
    }

    @Override
    public void proceed(Object newState) {
        System.out.println("I am executing proceed method !");
    }

    
}
