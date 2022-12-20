#include<iostream>
void prime(int);
using namespace std;
int main()
{ 
    int n=100;
   prime(n);
   return 0;
}
 void prime(int n){
     for(int i=2;i<=n;i++){
     int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0)
                c++;
        }
        if(c==0)
        cout<<i<<" ";
    }
 }