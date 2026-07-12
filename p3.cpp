#include <iostream>
using namespace std;
int main (){
    float a, b;
    cout <<"Enter First: ";
    cin >> a;
    cout << "Enter Second: ";
    cin >> b;

    float sum = a + b;
    float prod = a * b;
    float subtr = a - b;
    float divid = a / b;
    cout <<"Your Sum: " << sum <<endl;
    cout <<"Your Product: " << prod <<endl;
    cout <<"Your Subtract: " << subtr <<endl;
    cout <<"Your Divide: "<< divid <<endl;
    return 0;
}