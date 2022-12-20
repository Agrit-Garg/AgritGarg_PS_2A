#include<iostream>
using namespace std;
int main()
{ 
     int a=6,b=0;
     int n=0;
    for(int i=a;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<j;
   }   
   for(int k=1;k<=2*n-1;k++){
          cout<<" ";
    }
     n++;
     for(int l=a-1;l>=1;l--){
      if(b>0)
      {
      continue;
      }
     cout<<l;
     }
   
     if(b>0){
     for(int m=i;m>=1;m--){
        cout<<m;
     }
     }
     b++;
      cout<<endl;
 }
 
   return 0;
}