//Program 7 : Calculating the total shopping bill
#include <iostream>
using namespace std;

int main()
{
    string name;
    float price, total = 0;
    int quantity;
    
    for(int i = 1; i <= 3; i++)
    {
        cout << "\nEnter details of Product " << i << endl;

        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;

        total = total + (price * quantity);
    }

    cout << "\nTotal Shopping Bill = Rs. " << total << endl;

    return 0;
}

