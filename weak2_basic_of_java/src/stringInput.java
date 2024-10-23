import java.util.*;

public class stringInput{
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter string without space or with sapce : ");
        String str=sc.next();
        System.out.println("String : " + str);

        System.out.println("Enter string again without space or with sapce : ");
        String str2=sc.nextLine();
        System.out.println("String2 : " + str2);

        System.out.println("Enter string without space or with sapce : ");
        String str3=sc.next();
        System.out.println("String3 : " + str3);
        sc.close();
    }

}