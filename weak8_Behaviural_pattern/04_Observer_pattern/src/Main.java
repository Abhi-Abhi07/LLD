public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Start ...");
        ATCtower atcTower=new ATCtower();
        Tejas tejas1=new Tejas(atcTower);
        tejas1.takeOff();
        tejas1.land();

        Tejas tejas2=new Tejas(atcTower);
        Tejas tejas3=new Tejas(atcTower);
        Tejas tejas4=new Tejas(atcTower);
        tejas2.takeOff();        
        tejas4.takeOff();        
        tejas3.takeOff();

        atcTower.notifyObserver();
    }
}
