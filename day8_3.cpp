#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 9)
    {
        int a, sum = 0;
        while (n > 0)
        {
            a = n % 10;
            sum = sum + a;
            n = n / 10;
        }
        n = sum;
    }
    cout<<n;
    return 0;
}