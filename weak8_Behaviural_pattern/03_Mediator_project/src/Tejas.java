public class Tejas implements IAircrfat{
    ATCTower atcTower;

    public Tejas(ATCTower atcTower){
        this.atcTower=atcTower;
    }

    public void land(){
        System.out.println("Tejas land kar rha hai");
    }
    public void takeOff(){
        System.out.println("Tejas takeOff karne ja rha hai");
    }

    public void requestForLanding(){
        if(atcTower.requestToLanding(this)){
            this.land();
        }else{
            System.out.println("Fillhal Tejas aircraft you can't land");
        }
    }

    public void requestForTakeOff(){
        if(atcTower.requestToTakeOff(this)){
            this.takeOff();
        }else{
            System.out.println("Fillhal you can't takeOff because moosam kharab hai !");
        }
    }
}
