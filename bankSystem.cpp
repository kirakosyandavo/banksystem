#include"BankSystem.h"
void BankSystem::addAccount(const std::string& name, int accountNumber, double initialBalance){
BankAccount obj(name,accountNumber,initialBalance);
accounts.push_back(obj);
}
BankAccount* BankSystem::findAccount(int accountNumber){
for(int i=0;i<accounts.size();i++){
    if(accounts[i].m_accountNumber==accountNumber){
        return &accounts[i]; 
    } 
}
return nullptr;
}
void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount){
    if(findAccount(senderAcc)==nullptr|| findAccount(receiverAcc)==nullptr|| findAccount(senderAcc)->m_balance<amount){
        std::cout<<"there is a error";
        return;
    }
    findAccount(senderAcc)->withdraw(amount);
    findAccount(receiverAcc)->deposit(amount);
} 
void BankSystem::displayAllAccounts(){
    for(int i=0;i<accounts.size();i++){
        std::cout<<accounts[i].m_accountHolder<<std::endl;
        std::cout<<accounts[i].m_accountNumber<<std::endl;
        std::cout<<accounts[i].m_balance<<std::endl;
    }
}

