#include<iostream>
void perfect(int);
using namespace std;
int main()
{ 
    int n=100;
   perfect(n);
   return 0;
}
 void perfect(int n){
     for(int i=1;i<=n;i++){
     int c=0;
        for(int j=1;j<i;j++){
            if(i%j==0)
                c=c+j;
        }
        if(c==i)
        cout<<i<<" ";
    }
 }