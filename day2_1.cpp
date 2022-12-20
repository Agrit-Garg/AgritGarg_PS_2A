#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
      int   n=i;
        for(int j=1;j<=i;j++){
            cout<<n;
            n++;
        }
        cout<<endl;
    }
   return 0;
}