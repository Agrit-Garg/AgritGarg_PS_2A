#include <iostream>
using namespace std;
int main()
{

  string s;
  cin >> s;

  if (!((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_'))
    cout << "not a identifier";
  else
  {
    int c = 0;
    for (int i = 1; s[i] != '\0'; i++)
    {
      if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || ( s[i] == '_') || (s[i] >= '0' && s[i] <= '9')))
      {
        cout << "not a identifier";
        c = 1;
        break;
      }
    }
    if (c == 0)
      cout << "Identifier";
  }
  return 0;
}