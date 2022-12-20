#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int e;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < k && a[i] > 9)
        {
            int n = a[i];
            int d = a[i];
            int s, p = 0, a, c = 0;
            while (n > 0)
            {
                a = n % 10;
                s = abs(p - a);
                p = a;

                e = 0;
                if (s != 1 && c > 0)
                {
                    e = 1;
                    break;
                }

                c++;
                n = n / 10;
            }
            if (e == 0)
                cout << d << " ";
        }
    }

    return 0;
}