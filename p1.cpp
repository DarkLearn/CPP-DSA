#include<iostream>
using namespace std;
int main (){
    // Print Average Marks Taking 3 inputs...
    int n1, n2, n3;
    cout<<"Enter marks1: ";
    cin>>n1;
    cout<<"Enter marks2: ";
    cin>>n2;
    cout<<"Enter marks3: ";
    cin>>n3;
    float avg = (n1 + n2 + n3)/3.0;
    cout<<"Average marks: " << avg << "\n";
    return 0;
}