// Ronald Forte JR
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

#include "Bank.hpp" 
#include "Account.hpp"


Bank::Bank() {
    total_existing_accounts = 0;
}

std::string Bank::createAccount(std::string firstname, std::string lastname, std::string pin) {
    if(total_existing_accounts < 200) {
        Accounts[total_existing_accounts] = Account(firstname, lastname, pin);
        total_existing_accounts++;
        return Accounts[total_existing_accounts - 1].getAccountNumber();
        }
        return "-1";
    } 


bool Bank::removeAccount(std::string account_num) {
    for(int i = 0; i < total_existing_accounts; i++) {
        if(Accounts[i].getAccountNumber() == account_num) {
            Accounts[i] = Accounts[total_existing_accounts - 1];
            total_existing_accounts--;
            return true;
        }
    }
    return false;
}

bool Bank::withdraw(int amount, std::string account_num, std::string pin) {
    for(int i = 0; i < total_existing_accounts; i++) {
        if(Accounts[i].getAccountNumber() ==  account_num && Accounts[i].getPin() == pin) {
            return Accounts[i].transaction(amount * -1);
        }
    }
    return false;
}
bool Bank::deposit(int amount, std::string account_num, std::string pin) {
    for(int i = 0; i < total_existing_accounts; i++) {
        if(Accounts[i].getAccountNumber() ==  account_num && Accounts[i].getPin() == pin) {
            return Accounts[i].transaction(amount);
        }
    }
    return false;
}

int Bank::getAccountBalance(std::string account_num, std::string pin) {
    for(int i = 0; i < total_existing_accounts; i++) {
        if(Accounts[i].getAccountNumber() ==  account_num && Accounts[i].getPin() == pin) {
            return Accounts[i].getBalance();
        }
    }
    return -1;
} 