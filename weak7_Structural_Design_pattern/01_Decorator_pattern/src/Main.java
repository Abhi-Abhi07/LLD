public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Process start ...");

        ICar car=new Scorpio();
        ICar bulletProof=new BulletProof(car);
        float totalweight=bulletProof.getWeight();
        System.out.println("Total weight of bulletProof car : " + totalweight);
    }
}
