#include "Customer.h"

std::ostream &operator<<(std::ostream& os, const Customer& customer) {
    return os << customer.name << " " << customer.account;
}

Customer::Customer(std::string name, double balance) : name{name}, account{Account{balance}} {
    std::cout << "Created Account - Customer: " << *this << std::endl;
}
void Customer::deposit(double value) {
    std::cout << *this << " ";
    account.deposit(value);
}
void Customer::withdraw(double value) {
    std::cout << *this << " ";
    account.withdraw(value);
}
