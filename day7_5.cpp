#include <iostream>
using namespace std;
string upper(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            continue;
        }
        // else if(s[i] == ' '){
        //     continue;
        // }
        else
        {
            int temp = s[i] - 'a';
            s[i] = 'A' + temp;
        }
    }
    return s;
}
string lower(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            continue;
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            int temp = s[i] - 'A';
            s[i] = 'a' + temp;
        }
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << s.length() << endl;
    cout << upper(s)<< endl;
    cout << lower(s);
    return 0;
}