package Models.Account;

import Interfaces.Account;
import Models.ParkingTicket;

public class AjentAccount extends Account{

    // Ajent ki khud ki properties
    public boolean processTicket(ParkingTicket ticket){
        // add your own impl
        return true;
    }

    @Override
    public boolean resetPassword() {
        // add your impl
        return true;
    }
    
}
