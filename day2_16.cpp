#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=4;
    int N=n;
      n=2*n-2;
  
   int index;
   for(int row=0;row<=n;row++){
      for(int col=0;col<=n;col++){
      index= N-min(min(row,col),min(n-row,n-col));
       cout<<index<<" ";
      }
     cout<<endl;
   }
   return 0;
}