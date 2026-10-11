#include<iostream>
using namespace std;
int main(){
    int fahrenheit;
    cout<<"Enter the Temperature in Fahrenheit : ";
    cin>>fahrenheit;
    cout<<"Temperature in Celsius is = "<< (fahrenheit - 32) * 5/9<<endl;
    return 0;
}