#include<iostream>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int a=0;
    for(int i=0;s[i]!='\0';i++){
        for(int k=1;k<=i;k++){
            cout<<".";
        }
       for(int j=a;s[j]!='\0';j++){
        cout<<s[j];
       }a++;
       cout<<endl;
    }
   return 0;
}