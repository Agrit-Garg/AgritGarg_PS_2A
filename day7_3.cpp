#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        c++;
    }
   
    int d = c;
    for (int i = 0; i < c / 2; i++)
    {
        int temp = s[i];
        s[i] = s[d-1];
        s[d-1] = temp;
        d--;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    string a=s;
    s=reverse(s);
    if((s.compare(a))==0)
      cout<<"palindrome";
      else
      cout<<"Not Palindrome";
    
        return 0;
}
