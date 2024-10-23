public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Process start.....");

        AbstarctScorpio scorpio=new ScorpioN(new ScorpioN_impl_India());

        scorpio.saftyReq();
        System.out.println("is right handed or not :- "+scorpio.isRightHanded() );
        System.out.println("");

        scorpio=new ScorpioN(new ScorpioN_impl_USA());
        scorpio.saftyReq();
        System.out.println("is right handed or not :- "+scorpio.isRightHanded());
        
    }
}
