#include<iostream>
using namespace std;
int main()
{  
    int n=2,a,s=0;
    for(int i=1;i<=n;i++)
{
    a=i*(i+1)*(i+2);
    s=s+a;
} 
      cout<<s;
  return 0;
}