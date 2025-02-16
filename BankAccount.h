#include<iostream>
class BankAccount{
    std::string m_accountHolder;
    int m_accountNumber;
    double m_balance;
  public:
  BankAccount();
 BankAccount(std::string name,int accountNumber,double balance):m_accountHolder{name},
 m_accountNumber{accountNumber},m_balance{balance}{
 } 
  BankAccount(const BankAccount &other);   
  ~BankAccount();
   void deposit(double amount);
   bool withdraw(double amount);
   void display();
    friend class BankSystem;    

 };






