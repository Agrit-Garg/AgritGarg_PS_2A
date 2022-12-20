#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //  words = ["a","b","c","ab","bc","abc"], s = "abc"
    int c = 0;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    //  int lens=s.length();
    for (int i = 0; i<n; i++)
    {
        string ele = arr[i];
        int len = ele.length();
        int flag = 0;
        for (int j =0; j <len; j++)
        {
            if (ele[j] != s[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        c++;

    }
    cout << c;

    return 0;
}