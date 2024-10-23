public class SingletonDCLocking {
    volatile private static SingletonDCLocking instance;

    private SingletonDCLocking(){
        System.out.println("Object created !");
    }

    synchronized public static SingletonDCLocking getInstance(){
        if(instance==null){
            synchronized (SingletonDCLocking.class){
                // System.out.println(SingletonDCLocking.instance);
                if(instance==null){
                    instance=new SingletonDCLocking();
                }
            }
        }
        return instance;
    }

    public static void main(String[] args) {
        Thread th1=new Thread( () -> {SingletonDCLocking.getInstance(); } );
        Thread th2=new Thread( () -> {SingletonDCLocking.getInstance(); } );
        Thread th3=new Thread( () -> {SingletonDCLocking.getInstance(); } );
        Thread th4=new Thread( () -> {SingletonDCLocking.getInstance(); } );
        th1.start();
        th2.start();
        System.out.println("Ram");
        th3.start();
        th4.start();
    }
}
