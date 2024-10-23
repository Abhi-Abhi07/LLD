public class Singleton {

    private static Singleton instance;

    private Singleton(){
        System.out.println("ctor k under hu, instance create !");
    }

    public static Singleton getInstance(){
        if(instance==null){ 
            instance=new Singleton();
        }
        return instance;
    }

    public static void main(String[] args) {

        // normal case
        // Singleton obj1= Singleton.getInstance();
        // Singleton obj2= Singleton.getInstance();
        
        // multi threading me fut bhi sakta hai or nhi bhi
        Thread th1=new Thread( () -> {Singleton.getInstance(); } );
        Thread th2=new Thread( () -> {Singleton.getInstance(); } );
        th1.start();
        th2.start();
    }
}