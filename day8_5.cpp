#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            cout << i << " ";
        else
        {
            if (i % 2 == 0)
                cout << "2 ";
            else
                cout << "3 ";
        }
    }
    return 0;
}