// Ronald A Forte Jr
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

#ifndef BANK_HPP  
#define BANK_HPP 

#include "Account.hpp" 
#include <iostream>
#include <string>

class Bank {
    public:
        Bank();
        std::string createAccount(std::string firstname, std::string lastname, std::string pin);
        bool removeAccount(std::string accountnum);
        bool withdraw(int amount, std::string accountnum, std::string pin);
        bool deposit(int amount, std::string accountnum, std::string pin);
        int getAccountBalance(std::string accountnum, std::string pin);

    private:
        Account Accounts[200];
        int total_existing_accounts;

};
#endif