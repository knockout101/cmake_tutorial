#pragma once

#include <string>
#include <vector>
#include <iostream>

class Account {
private:
    double balance;
public:
    friend std::ostream &operator<<(std::ostream& os, const Account& acc);
    Account(double balance = 0);
    bool withdraw(double value);
    bool deposit(double value);
    ~Account() = default;
};