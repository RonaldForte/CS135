// Ronald A Forte JR
// 
// 
// 
// 
// 
// 
// 
// 

#include "Account.hpp"

std::string Account::generateAccountNumber(){
    std::string an_str = "";
    for(int i{0}; i < 8; i++ ){
        int temp = rand() % 10;
        an_str += std::to_string(temp);
    }
    return an_str;
}


Account::Account(){
    first_name_ = "anonymous";
    last_name_ = "anonymous";
    pin_number_ = "0000";
    account_number_ = generateAccountNumber();
    balance = 0;
}

Account::Account(std::string first_name, std::string last_name, std::string pin){
    first_name_ = first_name;
    last_name_ = last_name;

    if(pin.length() != 4){
        pin_number_ = "0000";
    }
    else{
        pin_number_ = pin;
    }

    account_number_ = generateAccountNumber();
    balance = 0;
}

void Account::setFirstName(std::string first_name){
    first_name_ = first_name;
}  
void Account::setLastName(std::string last_name){
    last_name_ = last_name;
}
bool Account::setPin(std::string pin){
    if(pin.length() == 4){
        pin_number_ = pin;
        return true;
    }
    else{
        return false;
    }
}
std::string Account::getFirstName(){
    return first_name_;
}
std::string Account::getLastName(){
    return last_name_;
}
std::string Account::getAccountNumber(){
    return account_number_;
}
int Account::getBalance(){
    return balance;
}
std::string Account::getPin(){
    return pin_number_;
}
bool Account::transaction(int amount){
    if(balance + amount < 0){
        return false;
    }
    else{
        balance = balance + amount;
        return true;
    }
}