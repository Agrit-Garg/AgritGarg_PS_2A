#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    cout<<"1 quadrant";
    else if(x<0 && y>0)
    cout<<"2 quadrant";
    else if(x<0 && y<0)
    cout<<"3 quadrant";
    else if(x>0 && y<0)
    cout<<"4 quadrant";
   return 0;
}