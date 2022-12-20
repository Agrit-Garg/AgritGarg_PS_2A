#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        int c = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] == 1)
            {
                c = 0;
                break;
            }
            else
            {
                if (a[i] == a[j])
                {
                    c++;
                    a[j] = 1;
                    
                }
            }
        }
        if (c > 0)
            cout << a[i] << "  frequency is:" << c << endl;
    }

    return 0;
}
