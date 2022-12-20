#include<iostream>
using namespace std;
int main()
{    
    int n=4;
   float s=0;
    for(int i=1;i<=n;i++){
      float a=2*i-1;
      int p=a;
        for(int j=1;j<p;j++){
             a=a*j;
        }
        a=i/a;
        if(i%2==0)
          s=s-a;
       else 
        s=s+a;
    }
    cout<<s;
   return 0;
}