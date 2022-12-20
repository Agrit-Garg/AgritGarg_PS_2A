#include<iostream>
using namespace std;
int main()
{     char c='E';
    for(char i=c;i>='A';i--){
      char   n=i;
        for(char j=c;j>=i;j--){
            cout<<n;
            n++;
        }
        cout<<endl;
    }
   return 0;
}