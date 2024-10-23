package Interfaces;

import Constant.AccountStatus;
import Models.Person;

public abstract class Account {
    private String username;
    private String pwd;
    private AccountStatus status;
    private Person person;
    
    public abstract boolean resetPassword();
}
