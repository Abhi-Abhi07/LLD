public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Process starting ...");

        UIcomponent uIcomponent=new Menu();

        button btn=new button();
        buttonCircle btnCircle=new buttonCircle();

        uIcomponent.add(btn);
        uIcomponent.add(btn);
        uIcomponent.add(btn);
        uIcomponent.add(btnCircle);
        uIcomponent.add(btnCircle);
        uIcomponent.draw();

        System.out.println();
        uIcomponent.remove(btn);
        uIcomponent.remove(btn);
        uIcomponent.draw();

    }
}
