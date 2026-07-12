#include <iostream>
using namespace std;
int main ()
{
    int pencil, eraser, pen;
    cout << "Enter Pencil cost: ";
    cin >> pencil;

    cout << "Enter Eraser cost: ";
    cin >> eraser;

    cout << "Enter pen cost: ";
    cin >> pen;

    int bill = pencil + pen + eraser;
    cout <<"Your bill: "<<bill<<endl;

    float tax = (18.0/100)*bill;
    cout << "Your bill with GST: " << bill + tax << endl;
    return 0;
}