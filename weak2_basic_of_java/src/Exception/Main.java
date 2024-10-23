package Exception;

import java.util.Scanner;

public class Main{
    public static int divide(int a,int b) throws ArithmeticException{
        return a/b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Stating");
        System.out.print("Enter a number : ");
        int a=sc.nextInt();
        System.out.print("Enter another number : ");
        int b=sc.nextInt();  
        sc.close();
        try {
            int res=divide(a,b);
            System.out.println("a/b = "+res);
        } catch (Exception e) {
            System.out.println("Please Enter valid input next time");
        }
        finally{
            System.out.println("filhaal Alright");
        }

        // try {
        //     int res=divide(a,b);
        //     System.out.println("a/b = "+res);
        //     System.exit(1);
        // } catch (Exception e) {
        //     System.out.println(e);
        // }
        // finally{
        //     System.out.println("filhaal Alright");
        // }

        // try {
        //     while(true){
        //         // infinite loop
        //         // intentionally left blank
        //     }
        // } catch (Exception e) {
        //     System.out.println(e);
        // }
        // finally{
        //     System.out.println("filhaal Alright");
        // }

        System.out.println("ending");
    }
}