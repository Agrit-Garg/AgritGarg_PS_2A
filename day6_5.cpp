#include <iostream>
using namespace std;
const int M=4;
const int N=4;

void spiral(int a[M][N])
{
    int top = 0;
    int bottom = M - 1;
    int left = 0;
    int right = N - 1;

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
            cout<<"a"<<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
             cout<<"b"<<" ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << a[bottom][i] << " ";
             cout<<"c"<<" ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << a[i][left] << " ";
             cout<<"d"<<" ";
        }
        left++;
    }
}
int main()
{
    // int n;
    // cin >> n;
   
    int a[M][N];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];
    spiral(a);
    return 0;
}