#include<iostream>
using namespace std;
int main()
{
    int totaldays , years , months , weeks , days;
    cout<<"Enter the Total Days : ";
    cin>>totaldays;
    years = (totaldays / 365);
    months = (totaldays % 365) / 30;
    weeks = ((totaldays % 365) % 30) / 7;
    days = ((totaldays % 365) % 30) % 7;
    cout<<"Years = "<<years<<endl;
    cout<<"Months = "<<months<<endl;
    cout<<"Weeks = "<<weeks<<endl;
    cout<<"Days = "<<days<<endl;
    return 0;
}