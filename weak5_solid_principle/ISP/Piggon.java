package LLD.weak5_solid_principle.ISP;

public class Piggon extends Bird implements Flying{
    @Override
    public void eat(){
        System.out.println("Piggon are eating");
    }    
    @Override
    public void fly(){
        System.out.println("Piggon are flying");
    }
}
