#include <iostream>
#include <cstring>
#include "Account_Util.h"

using namespace std;

// Displays Account objects in a  vector of Account objects 
void display(const vector<Account> &accounts) {
    cout << "\n=== Accounts ==========================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}


// Deposits supplied amount to each Account object in the vector
void deposit(vector<Account> &accounts, double amount) {
    cout << "\n=== Depositing to Accounts =================================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " to " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << acc << endl;
    }
}


// Withdraw amount from each Account object in the vector
void withdraw(vector<Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Accounts ==============================" << endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << acc << endl;
    } 
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const vector<Savings_Account> &accounts) {
    cout << "\n=== Savings Accounts ====================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}


// Deposits supplied amount to each Savings Account object in the vector
void deposit(vector<Savings_Account> &accounts, double amount) {
    cout << "\n=== Depositing to Savings Accounts ==========================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " to " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << acc << endl;
    }
}


// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(vector<Savings_Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Savings Accounts ======================" << endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << acc << endl;
    } 
}




// Helper functions for Checking Account class

// Displays Checking Account objects in a  vector of Savings Account objects 
void display(const vector<Checking_Account> &accounts) {
    cout << "\n=== Checking Accounts ====================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}


// Deposit supplied amount from each Checking Account object in the vector
void deposit(vector<Checking_Account> &accounts, double amount) {
    cout << "\n=== Depositing to Checking Accounts ======================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " from " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " from " << acc << endl;
    } 
}


// Withdrawals supplied amount to each Checking Account object in the vector
void withdraw(vector<Checking_Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Checking Accounts ==========================" << endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " to " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " to " << acc << endl;
    }
}




// Helper functions for Trust Account class

// Displays Trust Account objects in a  vector of Trust Account objects 
void display(const vector<Trust_Account> &accounts) {
    cout << "\n=== Trust Accounts=====================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(vector<Trust_Account> &accounts, double amount) {
    cout << "\n=== Depositing to Trust Accounts===========================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " to " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << acc << endl;
    }
}

// Withdraw supplied amount from each Trust Account object in the vector
void withdraw(vector<Trust_Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Trust Accounts=======================" << endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << acc << endl;
    } 
}

