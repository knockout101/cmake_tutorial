#pragma once

#include "Account.h"

class Customer {
private:
    std::string name;
    Account account;
public:
    friend std::ostream &operator<<(std::ostream& os, const Customer& customer);
    Customer(std::string name = "N/A", double balance = 0);
    void deposit(double value);
    void withdraw(double value);
};