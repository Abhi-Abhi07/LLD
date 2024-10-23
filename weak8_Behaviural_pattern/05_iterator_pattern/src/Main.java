import java.util.ArrayList;
import java.util.Iterator;
// import javax.swing.text.html.HTMLDocument.Iterator;

public class Main {
    public static void main(String[] args) throws Exception {

        System.out.println("Driver code start ...");

        Airforce airforce=new Airforce();
        ICustomIterator allPlanes=airforce.createIterator();

        while (allPlanes.hasNext()) {
            // why null because helicoper array size 2 rakh diya
            // size ko one kar do null nhi aayega
            System.out.println(allPlanes.next());
        }


        System.out.println("Driver code end !");



        // iterator example
        // ArrayList<String>companyList=new ArrayList<>();
        // companyList.add("FB");
        // companyList.add("Amazon");
        // companyList.add("MS");
        // companyList.add("Google");
        // companyList.add("Apple");

        // Iterator<String> it=companyList.iterator();

        // while (it.hasNext()) {
        //     System.out.println(it.next());
        // }

    }
}
