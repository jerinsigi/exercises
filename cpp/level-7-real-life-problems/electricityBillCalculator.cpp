//Electricity Bill Calculator

#include <iostream>
#include <string>
using namespace std;

class ElectricityBill{
    private:
        string consumerName;
        long long consumerNumber;
        double unitsConsumed;

        double baseEnergyCost;
        double taxAmount;
        double totalBill;

        const double taxRate=0.05;
        const double meterCharge=100;
        const double fixedCharge=50;
        const double unitCost=1.5;

    public:
        void getDetails(){
            cout<<"Enter consumer name : ";
            getline(cin,consumerName);
            cout<<"Enter consumer number : ";
            cin>>consumerNumber;
            cout<<"Units consumed : ";
            cin>>unitsConsumed;
            unitsConsumed=abs(unitsConsumed);
        }
        void calculateBill(){
            baseEnergyCost=unitsConsumed*unitCost;
            taxAmount=baseEnergyCost*taxRate;
            totalBill=baseEnergyCost+meterCharge+fixedCharge+taxAmount;
        }
        void printBill(){
            cout << "\n======================================" << endl;
            cout << "             DETAILED BILL            " << endl;
            cout << "======================================" << endl;
            cout<<"Consumer Name : "<<consumerName<<endl;
            cout<<"Consumer Number : "<<consumerNumber<<endl;
            cout<<"Units Consumed : "<<unitsConsumed<<endl;
            cout<<"Units Cosumption cost ("<<unitCost<<" Per Unit)"<<" : "<<baseEnergyCost<<endl;
            cout<<"Tax amount "<<taxRate<<"% : "<<taxAmount<<endl;
            cout<<"Meter charge : "<<meterCharge<<endl;
            cout<<"Fixed Charge : "<<fixedCharge<<endl;
            cout << "======================================" << endl;
            cout<<"Total Bill : "<<totalBill<<" Rupee "<<endl;
            cout << "======================================" << endl;
        }
};

int main(){
    ElectricityBill bill;
    bill.getDetails();
    bill.calculateBill();
    bill.printBill();
}
