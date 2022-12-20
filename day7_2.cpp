#include <iostream>
using namespace std;

void reverse(string s)
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
    cout << s;
}
int main()
{
    string s;
    cin >> s;
    reverse(s);
    return 0;
}
