package Models;

import java.sql.Date;

import Constant.TicketStatus;
import Interfaces.Payment;
import Interfaces.Vehicle;

public class ParkingTicket {
    private int ticketNo;
    private Date entryTimeStamp;
    private Date exitTimeStamp;
    private double amount;
    private TicketStatus status;

    // iske alawa or kya kya chahiye
    private Vehicle vehicle;
    private Payment payment;
    private Entrance entrance;
    private Exit exit;
}
