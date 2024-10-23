package LLD.weak5_solid_principle.ISP;

public class Koel extends Bird implements Flying, Singing{
    @Override
    public void eat(){
        System.out.println("Koel are eating");
    }
    @Override
    public void fly(){
        System.out.println("Koel are flying");
    }
    @Override
    public void sing(){
        System.out.println("Koel are singing");
    }
}