public class LazySingleton {

    private LazySingleton(){
        System.out.println("ctor k under hu, instance created !");
    }

    private static class Holder{
        private static final LazySingleton INSTANCE=new LazySingleton();
    }

    public static LazySingleton getInstance(){
        return Holder.INSTANCE;
    }

    public static void main(String[] args) {

        Thread th1=new Thread( () -> {LazySingleton.getInstance(); } );
        Thread th2=new Thread( () -> {LazySingleton.getInstance(); } );
        th1.start();
        th2.start();
    }
}
