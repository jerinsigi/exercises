//Parking Fee Calculator

#include <iostream>
#include <math.h>
using namespace std;

class Parking{
private:
    string vehicleNumber;
    string vehicleType;
    int vehicleTypeCode;
    double parkingHours;
    double totalCharge;

    double baseCharge;
    double HourCharge;

    int choice;

public:
    void getDetails(){
        cout << "Enter Vehicle Number : ";
        cin.get();
        getline(cin, vehicleNumber);
        againType:
        cout << "Select vehicle Type "<<endl;
        cout << "1. Motorcycle"<<endl;
        cout <<"2. car, taxi"<<endl;
        cin >> choice;
        switch(choice){
            case 1:
                vehicleType = "Motocycle";
                vehicleTypeCode = 1;
                break;
            case 2:
                vehicleType = "Car or Taxi";
                vehicleTypeCode = 2;
                break;
            default:
                cout<<"Choice not found"<<endl;
                goto againType;
        }
        cout<< "Enter parking hours : ";
        cin >> parkingHours;
        parkingHours = ceil(abs(parkingHours));
    }

    void calculateRate(){
        if(vehicleTypeCode == 1){
            baseCharge = 20;
            HourCharge = 30;
         }
         else if(vehicleTypeCode == 2){
            baseCharge = 40;
            HourCharge = 20;
         }
        totalCharge = baseCharge+(HourCharge*(parkingHours-1));
    }

    void printReceipt(){
        cout << "\n======================================" << endl;
        cout << "            PARKING RECEIPT           " << endl;
        cout << "======================================" << endl;
        cout << "Vehicle Type : "<<vehicleType<<endl;
        cout<<"Vehicle Number : "<<vehicleNumber<<endl;
        cout<< "Parking Hours : "<<parkingHours<<" hrs"<<endl;
        cout << "Base Charge : "<<baseCharge<<endl;
        cout<<"Hour Chrage for "<<parkingHours<<"hrs : "<<HourCharge*(parkingHours-1)<<endl;

        cout << "\n======================================" << endl;
        cout<<"Total Bill : "<<totalCharge<<endl;
        cout << "\n======================================" << endl;
    }
};

int main(){
    Parking fee;

    fee.getDetails();
    fee.calculateRate();
    fee.printReceipt();

    return 0;
}
