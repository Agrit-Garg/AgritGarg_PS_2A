#include<iostream>
using namespace std;
int main()
{
    int n=2;
    int s=0;
    int a=1;
    for(int i=1;i<=n;i++){
        // int a=i;
        // for(int j=1;j<i;j++){
        //     a=a*j;
        // }
        a=a*i;
      s =a+s;
    }
    cout<<s;

   return 0;
}