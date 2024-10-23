public class Rafale implements IAircrfat{
    ATCTower atcTower;

    public Rafale(ATCTower atcTower){
        this.atcTower=atcTower;
    }

    public void land(){
        System.out.println("Rafale land kar rha hai");
    }
    public void takeOff(){
        System.out.println("Rafale takeOff karne ja rha hai");
    }

    public void requestForLanding(){
        if(atcTower.requestToLanding(this)){
            this.land();
        }else{
            System.out.println("Fillhal Rafale aircrat you can't land");
        }
    }

    public void requestForTakeOff(){
        if(atcTower.requestToTakeOff(this)){
            this.takeOff();
        }else{
            System.out.println("Fillhal you can't takOff because moosam kharab hai !");
        }
    }
}

