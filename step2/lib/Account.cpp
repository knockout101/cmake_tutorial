#include "Account.h"

std::ostream &operator<<(std::ostream& os, const Account& acc) {
    return os << "[BALANCE: " << acc.balance << "]";
}

Account::Account(double balance) : balance{balance} {}

bool Account::withdraw(double value) {
    if(value < 0 && balance > value) {
        std::cerr << "Withdraw failed [WITHDRAWL : " << value << " BALANCE: " << balance << "]" << std::endl;
        return false;
    }
    std::cout << "Withdrawing " << value << std::endl;
    balance -= value;
    return true;
}

bool Account::deposit(double value) {
    if(value < 0) {
        std::cerr << "Deposit failed [DEPOSIT : " << value << "]" << std::endl;
        return false;
    }
    std::cout << "Depositing " << value << std::endl;
    balance += value;
    return true;
}