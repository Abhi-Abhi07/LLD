package Models.Payment;

import Interfaces.Payment;

public class Card extends Payment{

    @Override
    public boolean initiateTransction() {
        //add your impl here
        return true;
    }
    
}
