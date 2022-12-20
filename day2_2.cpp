#include<iostream>
using namespace std;
int main()
{  
    int n=4;
    int p=n;
    for(int i=1;i<=p;i++){
        int a=i;
        for(int j=n-1;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<a<<" ";
            a++;
        }
        n--;
        cout<<endl;
    }
   return 0;
}