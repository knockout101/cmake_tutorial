#include "Customer.h"
#include <list>

void show_current_accounts(std::list<Customer*> &customers);

int main(void) {
    std::list<Customer*> customers;

    std::cout << "------------ACCOUNT CREATION---------------------" << std::endl;    
    Customer tristan {"Tristan", 1500};
    customers.push_back(&tristan);
    Customer colin {"Colin", 1500};
    customers.push_back(&colin);

    std::cout << std::endl;
    std::cout << "-------------ACCOUNT ACCTIONS--------------------" << std::endl;
    tristan.withdraw(100);
    colin.deposit(200);

    std::cout << std::endl;
    std::cout << "-------------CURRENT ACCOUNTS--------------------" << std::endl;
    show_current_accounts(customers);

    return 0;
}

void show_current_accounts(std::list<Customer*> &customers) {
    for(auto &customer : customers) {
        std::cout << *customer << std::endl;
    }
}