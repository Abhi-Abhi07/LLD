package LLD.weak5_solid_principle.ISP;

public class Sparrow extends Bird implements Flying, Singing{
    @Override
    public void eat(){
        System.out.println("Sparrow are eating");
    }
    @Override
    public void fly(){
        System.out.println("Sparrow are flying");
    }
    @Override
    public void sing(){
        System.out.println("Sparrow are singing");
    }
}
