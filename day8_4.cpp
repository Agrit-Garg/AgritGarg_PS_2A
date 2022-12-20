#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    // 1230006
    int c = 0;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    int sum = 0;
    for (int i = 0; i < c / 2; i++)
    {
        int a = temp % 10;
        sum += a;
        temp /= 10;
    }
    cout << sum << endl;
    temp /= 10;
    int add = 0;
    for (int i = 0; i < c / 2; i++)
    {
        int a = temp % 10;
        add += a;
        temp /= 10;
    }
    cout << add;
    if (sum == add)
        cout << "Balanced Number";
    else
        cout << "Not a Balanced Number";
    return 0;
}