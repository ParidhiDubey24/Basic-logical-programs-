#include<iostream>
using namespace std;
int main()
{
    int celsius;
    cout<<"Enter Temperature in Celsius : ";
    cin>>celsius;
    cout<<"Temperature in Fahrenheit is = "<< (celsius * 9/5) + 32<<endl;
    return 0;
}