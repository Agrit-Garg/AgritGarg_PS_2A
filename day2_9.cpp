#include<iostream>
using namespace std;
int main()
{     int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        
      for(int j=i;j<=a-1;j++){
            cout<<" ";
        }
     for(int k=1;k<=2*i-1;k++){
        cout<<"*";
     }
     cout<<endl;
    }
    int n=1;
    for(int i=a-1;i>=1;i--){
      
      for(int j=1;j<=n;j++){
        cout<<" ";
      }
     for(int k=1;k<=2*i-1;k++){
       cout<<"*";
    }cout<<endl;
    n++;
    }
  return 0;
}