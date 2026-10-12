#include<iostream>
using namespace std;
int main()
{
    float r, v;
    cout<<"Enter the Radius of Sphere : ";
    cin>>r;
    v = (4.0/3.0) * 3.14 * r * r * r;
    cout<<"The Volume of given Sphere is = "<<v<<endl;
    return 0;
}