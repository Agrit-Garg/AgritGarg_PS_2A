#include<iostream>
using namespace std;
int main()
{
    for(char i='A';i<='D';i++){
      char   n=i;
        for(char j='A';j<=i;j++){
            cout<<n;
            n++;
        }
        cout<<endl;
    }
   return 0;
}