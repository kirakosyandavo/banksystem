# Bank System in C++

This project implements a simple banking system in C++ that allows users to manage multiple bank accounts. The system includes two main classes:

- `BankAccount`: Represents an individual bank account.
- `BankSystem`: Manages multiple bank accounts, including operations such as adding accounts, transferring funds, and displaying account details.

## Classes

### 1. `BankAccount`

The `BankAccount` class represents a bank account with basic operations for managing account balance and transactions.

#### Attributes:
- `m_accountNumber`: A unique identifier for the bank account (integer).
- `m_accountHolder`: The name of the account holder (string).
- `m_balance`: The balance of the bank account (double).

#### Methods:
- `deposit(double amount)`: Deposits the specified amount into the account. The amount must be positive.
- `withdraw(double amount)`: Withdraws the specified amount from the account if sufficient balance is available. The amount must be positive and less than or equal to the current balance.
- `display()`: Returns a string with the account details, including account number, owner name, and balance.

### 2. `BankSystem`

The `BankSystem` class manages a collection of `BankAccount` instances. It allows users to perform operations such as adding, removing, and viewing accounts, as well as transferring funds between accounts.

#### Attributes:
- `accounts`: A vector that stores all `BankAccount` instances in the system.

#### Methods:
- `addAccount(const std::string& name, int accountNumber, double initialBalance)`: Adds a new `BankAccount` object to the system with the specified details.
- `findAccount(int accountNumber)`: Finds and returns a pointer to the `BankAccount` with the specified account number.
- `transferFunds(int senderAcc, int receiverAcc, double amount)`: Transfers the specified amount from one account to another, if both accounts are found and the sender has sufficient funds.
- `displayAllAccounts()`: Displays the details of all the accounts in the system.
