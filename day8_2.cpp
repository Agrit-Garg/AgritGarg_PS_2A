#include <bits/stdc++.h>
using namespace std;
int main()
{
    //a^b= 7^2=49
    // k=1
    // ans=9
    int a, b, k;
    cin >> a >> b >> k;
    int p = (int)(pow(a, b));
    cout << p << endl;

    string s;
    s = to_string(p);
    int l = s.length();

    cout << s[l - k];

    return 0;
}