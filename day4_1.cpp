#include<iostream>
using namespace std;
int main()
{ 
    int n=121,a=0,p;
    p=n;
    while(n>0){
      int r=n%10;
         a=a*10+r;
          n=n/10;
    }
  
    if(a==p)
    cout<<"palindrome";
    else
     cout<<"not a palindrome no.";
   return 0;
}