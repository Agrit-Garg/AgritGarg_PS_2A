#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    // cat 1 -x , cat 2 -y , mouse - z 
    cin>>x>>y>>z;
int a=0,b=0;
   while(x!=z){
    if(x<z){
        x++;
        a++;
    }
    else{
        x--;
        a++;
    }

   }
   while(y!=z){
    if(y<z){
        y++;
        b++;
    }
    else{
        y--;
        b++;
    }
   }
   
   if(a>b)
    cout<<"Cat 2";
    else if(b>a)
    cout<<"Cat 1";
    else
    cout<<"MOUSE";
    
   return 0;
}