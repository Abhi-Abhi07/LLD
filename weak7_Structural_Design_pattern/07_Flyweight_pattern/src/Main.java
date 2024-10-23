public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("process start...");
        // int arr[][] : lacation tejas

        Terjas tejas=new Terjas();

        for(int i=0; i<5; i++){
            // fetch src location from location array
            int srcX=5;
            int srcY=10;


            int destX=10;
            int destY=25;
            int speed=400;

            int totalTime=tejas.getTotalTimeToReachDestn(srcX,srcY,destX,destY,speed);
            System.out.println(totalTime);
        }
        System.out.println("process end...!");
    }
}
