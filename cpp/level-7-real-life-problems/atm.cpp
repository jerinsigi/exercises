//ATM Balance Check

#include<iostream>
#include<string>

using namespace std;

class Bank{
    private:
        string name;
        long long accountNumber;
        long long amount;
        long long balance;

    public:
        void setValue(){
        cout<<"Enter name : ";
        getline(cin,name);

        cout<<"Enter account number : ";
        cin>>accountNumber;

        cout<< "Enter balance : ";
        cin>>balance;
        }

        void showData() {
        cout << "Name : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
        }

        void deposit(){
            cout<<"Enter amount to deposit : ";
            cin>>amount;
            balance+=amount;
            showBalance();
        }

        void withdraw(){
            cout<< "Enter amount to withdraw : ";
            cin>>amount;
            if(balance<amount){
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                balance-=amount;
                cout<<amount<<" withdrawn successfully"<<endl;
            }
            showBalance();
        }

        void showBalance(){
            cout<<"Balance : "<<balance<<endl;
        }

        void clearScreen() {
        cout << "\033[2J\033[1;1H";
}
};

int main(){
    Bank b;
    int choice;
    bool login=false;

    while(true){

        if(login==false){
            cout<<"Enter details to continue"<<endl;
            b.setValue();
            login=true;
            b.clearScreen();
        }
        cout<<"Welcome to ATM Management System"<<endl;
        cout<<"1. Show Account Details"<<endl;
        cout<<"2. Show Balance"<<endl;
        cout<<"3. Deposit"<<endl;
        cout<<"4. Withdraw"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : \n";
        cin>>choice;
        b.clearScreen();
        switch(choice){
        case 1:
            b.showData();
            break;
        case 2:
            b.showBalance();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.withdraw();
            break;
        case 5:
            login=false;
            break;
        default:
            cout<<"Invalid Entry"<<endl;
        }
        cout<<"Press any key to continue...."<<endl;
        cin.ignore();
        cin.get();
        b.clearScreen();
    }
    return 0;
}
