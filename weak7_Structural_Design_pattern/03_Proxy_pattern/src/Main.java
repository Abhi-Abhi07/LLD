import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Process start ...");
        RemoteProxy remoteProxy=new RemoteProxy();
        boolean process=true;
        Scanner sc=new Scanner(System.in);
        while(process){
            System.out.print("Enter direction OPTION(l,r,f,b) : ");
            String str=sc.nextLine();

            switch (str) {
                case "l": remoteProxy.leftTurn();
                    break;

                case "r": remoteProxy.rightTurn();
                break;
                
                case "f": remoteProxy.goStraigth();
                break;

                case "b": remoteProxy.goBack();
                break;

                default: process =false;
                    break;
            }
        }
        sc.close();
    }
}
