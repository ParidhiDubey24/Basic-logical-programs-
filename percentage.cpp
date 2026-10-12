#include<iostream>
using namespace std;
int main(){
    float h, e, c, p, m, total, percentage;
    cout<<"Enter Marks of Hindi : ";
    cin>>h;
    cout<<"Enter Marks of English : ";
    cin>>e;
    cout<<"Enter Marks of Chemistry : ";
    cin>>c;
    cout<<"Enter Marks of Physics : ";
    cin>>p;
    cout<<"Enter Marks of Maths : ";
    cin>>m;
    total = h + e + c + p + m ;
    percentage = (total * 100) / 500;
    cout<<"Total Marks Obtained is = "<<total<<endl;
    cout<<"Percentage = "<<percentage<<endl;
    return 0;
}