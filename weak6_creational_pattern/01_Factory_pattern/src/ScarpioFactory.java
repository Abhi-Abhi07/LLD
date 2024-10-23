

// SimpleFactory -> Kind of factory pattern not a complete Factory pattern
public class ScarpioFactory{
    public Scarpio createScarpio(char type){
        switch(type){
            case 'N':return new ScarpioN();

            case 'C':return new ScarpioClassic();

            default : return new Scarpio();
        }
    }
}