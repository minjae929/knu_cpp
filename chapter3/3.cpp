#include <iostream>
#include <string> 
using namespace std;

class Account {
private: 
    string name;  
    int id;
    int balance;   

public:
    
    Account(string x, int y, int z) {
        name = x;   
        id = y;   
        balance = z; 
    }

    string getOwner() {
        return name;
    }

    int deposit(int money) {
        balance += money;  
        return balance;   
    }

    int withdraw(int money) {
        if (money > balance) {
            cout << "잔액이 부족합니다!" << endl;
            return balance; 
        }
        balance -= money; 
        return balance;    
    }

    int inquiry() {
        return balance;
    }
};

int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
