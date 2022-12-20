#include<iostream>
using namespace std;

int compare(string s,string a){

    for(int i=0;(s[i]!='\0'||a[i]!='\0');i++){
        if(s[i]!=a[i]){
            return 2;
        }
    }
    return 1;
}


int main()
{ 
    string a,s;
    cin>>s>>a;
  
     if(1==compare(s,a))
     cout<<"Equal String";
     else
     cout<<"String are not equal";
   return 0;
}