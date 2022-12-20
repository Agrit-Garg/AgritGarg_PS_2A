#include<iostream>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int c=n;
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[c-1];
        a[c-1]=temp;
        c--;
    }
     for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
   return 0;
}