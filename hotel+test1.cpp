#include <iostream>
#include <string>
using namespace std;

int main(){

    const char R = 'R', D = 'D', S='S', E='E';
    char roomCode;
    string name, payment;
    float price = 0;
    float total_price, govment_tax, discount;
    int days, choice;
    float total_bill1, total_bill2, total_bill3;

    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter your days of stay: ";
    cin >> days;
    cout << endl;

    cout << "choose your room type: " << endl;
    cout << " Room Code: R | Room Type: Superior     | Price: RM 170.00 per night" << endl;
    cout << " Room Code: D | Room Type: Deluxe       | Price: RM 150.00 per night" << endl;
    cout << " Room Code: S | Room Type: Standard     | Price: RM 130.00 per night" << endl;
    cout << " Room Code: E | Room Type: Economy      | Price: RM  90.00 per night" << endl;
    cout << endl;
    cout << "Enter your room code: ";       
    cin >> roomCode;
    cout << endl;

    if (roomCode == R){
        price = 170.00;
        total_price = price * days;
        cout << "you choose Luxury Suite" << endl;
        cout << "the price is RM " << total_price << endl;
        }
    else if (roomCode == D){
        price = 150.00;
        total_price = price * days;
        cout << "you choose Family Room" << endl;
        cout << "the price is RM " << total_price << endl;
        }
    else if (roomCode == S){
        price = 130.00;
        total_price = price * days;
        cout << "you choose Couple Room" << endl;
        cout << "the price is RM " << total_price << endl;
        }
    else if (roomCode == E){
        price = 90.00;
        total_price = price * days;
        cout << "you choose Single Room" << endl;
        cout << "the price is RM " << total_price << endl;
        }
    else {
        cout << "invalid room code" << endl;
        }

    cout << endl;
    cout << "choose your payment method: " << endl;
    cout << " 1. Credit Card" << endl;
    cout << " 2. Cash" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if(choice == 1){
        govment_tax = total_price * 0.06;
        total_bill1 = total_price + govment_tax;
        discount = total_bill1 * 0.1;
        total_bill2 = total_bill1 - discount; 
        cout << "--------------------------------------" << endl;
        cout << "your total bill is RM" << total_bill2 << endl;
    }else if(choice == 2){
        govment_tax = total_price * 0.06;
        total_bill1 = total_price + govment_tax;
        cout << "--------------------------------------" << endl;
        cout << "your total bill is RM" << total_bill1 << endl;

    }

    return 0;

}