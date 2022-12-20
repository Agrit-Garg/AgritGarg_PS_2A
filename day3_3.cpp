#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2;
    int s=1;
    int x=2;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<i;j++){
            a=a*j;
        }
        a=(pow(x,i))/a;
        if(i%2==0)
      s =a+s;
      else
      s=s-a;
    }
    cout<<s;

   return 0;
}