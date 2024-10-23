package Interfaces;

import java.sql.Date;

import Constant.PaymentStatus;

public abstract class Payment {
    private double amount;
    private PaymentStatus status;
    private Date timeStamp;
    private String transctionID;

    public abstract boolean initiateTransction();
    
}
