package Models.Payment;

import Interfaces.Payment;

public class Cash extends Payment{

    @Override
    public boolean initiateTransction() {
        // add your own impl
        return true;
    }
    
}
