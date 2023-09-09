// Ronald A Forte JR
// 
// 
// 
// 
// 
// This program is an intro to classes where we are making a class for a Bank Account
// 
// 

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

class Account{
    public:
        //Constructors
        Account();
        Account(std::string first_name, std::string last_name, std::string pin);
        
        //setters
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        bool setPin(std::string pin);

        //getters
        std::string getFirstName();
        std::string getLastName();
        std::string getAccountNumber();
        std::string getPin();
        int getBalance();

        bool transaction(int amount);

    private: 
        std::string generateAccountNumber();
        std::string first_name_;
        std::string last_name_;
        std::string account_number_;
        std::string pin_number_;
        int balance;
};
#endif