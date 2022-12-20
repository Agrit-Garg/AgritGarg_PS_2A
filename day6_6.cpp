#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    // char s1[30],s2[30];
    int  a[26]={0};
    cin>>s1>>s2;

    for(int i=0;s1[i]!='\0';i++){
        a[s1[i]-'a']++;
    }
     for(int i=0;s2[i]!='\0';i++){
        a[s2[i]-'a']--;
    }
    int sum=0;
     for(int i=0;i<26;i++){
       
       sum=sum+ abs(a[i]);
    }
    cout<<sum;
   return 0;
}