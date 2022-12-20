#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col],b[col][row];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>a[i][j];
        }
    }
   
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
           b[j][i]=a[i][j];
        }
    }
        for(int i=1;i<=col;i++){
         int d=row;
        for(int j=1;j<=row/2;j++){
            int temp=b[i][j];
            b[i][j]=b[i][d];
            b[i][d]=temp;
            d--;
        }
    }
    for(int i=1;i<=col;i++){
        for(int j=1;j<=row;j++){
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}