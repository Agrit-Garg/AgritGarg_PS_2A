#include<iostream>
void  seri(int);
using namespace std;
int main()
{
    int n=16;
    seri(n);
   return 0;
}
 void seri(int n){
    cout<<n<<" ";
    if(n<=0)
    return;
    seri(n-5);
    cout<<n<<" ";
 }