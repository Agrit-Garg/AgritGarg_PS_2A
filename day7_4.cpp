 #include<bits/stdc++.h>
 using namespace std;
 int length(string s){
 int c=0;
  for(int i=0;s[i]!='\0';i++){
    if(s[i]!=' ')
     c++;
  }
  return c;
 }
 int main()
 {
    string s;
    getline(cin,s);
    cout<<length(s);
   
    return 0;
 }