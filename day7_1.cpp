 #include<bits/stdc++.h>
 using namespace std;
 int length(string s){
 int c=0;
  for(int i=0;s[i]!='\0';i++){
     c++;
  }
  return c;
 }
 int main()
 {
    string s;
    getline(cin,s);
    cout<<length(s);
    cout<<"a";
   
    return 0;
 }