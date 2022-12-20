#include<iostream>
int fact(int);
using namespace std;
int main()
{  
    int n=4;
     
    //  for(int i=1;i<=n;i++){
    //    a= fact(i);
    //  }
     cout<<fact(n,1);

   return 0;
}
int fact(int n,int r){
    if(n==1)
    return (r);
   
    else
    return (fact(n-1),n*r);
}