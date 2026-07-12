#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout <<"Enter Principal: ";
    cin >> p;

    cout <<"Enter Rate: ";
    cin >> r;
    cout <<"Enter Time: ";
    cin >> t;

    float SI = (p*r*t)/100;
    cout << "Simple Interet: " << SI << endl;
    return 0;
}