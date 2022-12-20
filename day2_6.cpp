#include<iostream>
using namespace std;
int main()
{   
    int a=4;
    for(int i=1;i<=a;i++){
        int n=i;
        for(int j=i;j<=a-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
           cout<<n;
            n++;
           
        }
        int b=n-2;
        for(int l=2;l<=b;l++){
            cout<<b;
            b--;
        }
        cout<<endl;
    }

   return 0;
}