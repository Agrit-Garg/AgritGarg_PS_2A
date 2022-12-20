#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2;
    float s=1;
    int x=2;
    for(int i=1;i<=n;i++){
        float a=2*i;
        int p=a;
        for(int j=1;j<p;j++){
            a=a*j;
        }
        a=(pow(x,p))/a;
        if(i%2==0)
         s =s+a;
         else 
         s=s-a;
    }
    cout<<s;

   return 0;
}