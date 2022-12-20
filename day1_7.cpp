#include<iostream>
using namespace std;
int main()
{
    float t;
    cin>>t;
    if(t<0)
    cout<<"Freezing weather";
    else if(t>=0&& t<10)
    cout<<"Very cold weather";
    else if(t>=10 && t<20)
    cout<<"cold weather";
    else if(t>=20 && t<30)
    cout<<"Normal in temp";
    else if(t>=30&& t<40)
    cout<<"Hot";
    else
    cout<<"very hot";
   return 0;
}