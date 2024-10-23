package Function;

import java.util.Random;
import java.util.Scanner;

public class random {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number : ");
        int num=sc.nextInt();
        sc.close();
        System.out.println("Number is : "+num);
        System.out.println(r(num));
    }
    public static int r(int num) {
        Random random=new Random();
        return random.nextInt(num);
    }
}
