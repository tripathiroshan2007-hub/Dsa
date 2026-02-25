#include<iostream>
#include<string>
using namespace std;

class BankAccount {
   private:
   double balance;

   public:
   string accountHolderName;
   int accountNumber;
   int ifscCode;
    BankAccount( string name,long int accNumber, double initialBalance) {
        accountHolderName =name;
        accountNumber =accNumber;
        balance = initialBalance;

        if(initialBalance>0){
            balance =initialBalance;
        
        } else{
            balance=0;
        }
    }

    void deposite(double amount){
        if(amount>0){
            balance +=amount;
            cout<<"Deposited: $" << amount << endl;

        }
    }
    void displayBalance(){
        cout<<accountHolderName<<" 's balance: $" << balance <<endl;

    }

};
  int main(){
    BankAccount account1("rahul kumar", 6392564372, 1200.00);
    account1.displayBalance();
    account1.deposite(500.00);
    account1.displayBalance();
    return 0;
  }

    