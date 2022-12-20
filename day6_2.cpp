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
        for(int j=1,k=col;j<=col;j++,k--){
        b[k][i]=a[i][j];
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