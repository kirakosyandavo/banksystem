#include"BankAccount.h"
BankAccount::BankAccount(){
     m_accountHolder="Unknown";
     m_accountNumber=0;
     m_balance=0;
} 
BankAccount::BankAccount(const BankAccount &other){
    m_accountNumber=other.m_accountNumber;
    m_balance=other.m_balance;
    m_accountHolder=other.m_accountHolder;
}  
BankAccount:: ~BankAccount(){
} 
void BankAccount::deposit(double amount){
    if(amount<0){
        return;
    }
    m_balance+=amount;
}
bool BankAccount::withdraw(double amount){
    if(amount>m_balance){
        std::cout<<"error";
        return false;
    }
    m_balance-=amount;
    return true;
}
void BankAccount::display(){
 std::cout<<m_accountNumber<<std::endl;
 std::cout<<m_accountNumber<<std::endl;
 std::cout<<m_balance<<std::endl;   
}