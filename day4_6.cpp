#include<bits/stdc++.h>
using namespace std;
void armstrong(){
    int n;
    cin>>n;
    int n1=n;
    int r,a=0;
    
    while(n>0){
        r=n%10;
        a=a+pow(r,3);
        cout<<a<<endl;
        n=n/10;
    }
    cout<<a;
    if(n1==a){
        cout<<"YES"<<endl;
    }
    else
      cout<<"NO\n";
}
int main()
{
    armstrong();
   return 0;
}

