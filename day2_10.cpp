#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n = 1;
    for (int i = a; i >= 1; i--)
    {

        for (int j = 1; j < n; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        n++;
        cout << endl;
    }
    int b=a-2;
   for(int i=2;i<=a;i++){
    for(int j=b;j>=1;j--){
        cout<<" ";
    }
    b--;
    for(int k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
   }
    return 0;
}