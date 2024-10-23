public class App{
    public static void main(String []args) throws Exception{
        // object creation
        // Student A=new Student();
        // A.id=1;
        // A.name="Ravi";
        // A.age=12;
        // A.numOfSub=5;
        // System.out.println(A.id);
        // System.out.println(A.name);
        // System.out.println(A.age);
        // System.out.println(A.numOfSub);
        // A.study();
        // A.sleep();


        Student A=new Student(1,"Raju",15,5,"Babita");
        System.out.println("Student A Details : ");
        System.out.println(A.id);
        System.out.println(A.name);
        System.out.println(A.age);
        System.out.println(A.numOfSub);
        A.study();
        A.sleep();
        A.bunk();

        Student B=new Student(A);
        System.out.println("Student B Details : ");
        System.out.println(B.id);
        System.out.println(B.name);
        System.out.println(B.age);
        System.out.println(B.numOfSub);
        B.study();
        B.sleep();
        B.bunk();

        B.id=5;
        System.out.println("\n"+A.id);
        System.out.println(B.id);

        System.out.println("\n\n"+A.getGf());
        System.out.println("\n\n"+B.getGf());
    }
}