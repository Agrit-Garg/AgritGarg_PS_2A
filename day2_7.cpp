#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    for(int i=1;i<=a;i++){
        
        for(int j=i;j<=a-1;j++){
            cout<<" ";
        }
        int n=i;
        for(int k=1;k<=i;k++){
           cout<<n;
           n--;
            }
        
        for(int l=2;l<=i;l++){
            cout<<l;
         
        }
        cout<<endl;
    }

   return 0;
}