public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Process start ...");

        ATCTower atcTower=new ATCTower();
        Tejas tejas=new Tejas(atcTower);
        Rafale rafale=new Rafale(atcTower);
        tejas.requestForLanding();
        rafale.requestForLanding();
        tejas.requestForTakeOff();
        rafale.requestForLanding();
    }
}
