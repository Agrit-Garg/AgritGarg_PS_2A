#include<iostream>
using namespace std;
int main()
{    int a;
      cin>>a;
    int n=a-1;
    for(int i=1;i<=a;i++){
      
        for(int j=1;j<=i;j++){
            cout<<j;
           }
       for(int k=1;k<=2*n;k++){
           cout<<" ";
       }int b=i;
       for(int l=1;l<=i;l++){
        cout<<b;
        b--;
       }
     cout<<endl;
     n--;
     }
   return 0;
}