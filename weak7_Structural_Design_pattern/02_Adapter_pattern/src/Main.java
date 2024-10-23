public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Prcess Starting ...");

        HotAirBalloon hotAirBalloon=new HotAirBalloon();
        Adapter adapter=new Adapter(hotAirBalloon);
        adapter.start();

        System.out.println("Prcess finished !");

    }
}
