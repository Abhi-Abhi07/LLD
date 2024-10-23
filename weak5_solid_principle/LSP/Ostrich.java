package LLD.weak5_solid_principle.LSP;

public class Ostrich extends Bird{

    public Ostrich(){}
    @Override
    public void eat(){
        System.out.println("Ostrich eating");
    }
    @Override
    public void fly(){
        System.out.println("Ostrich can't flying");
    }
}
