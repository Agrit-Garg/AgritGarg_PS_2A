#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //input
    int a[n][n],b[2*n+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    //row addition
    int sum,p=0;
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            sum+=a[i][j];
        }
       b[p]=sum;
       p++;
    }
     //column addition
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            sum+=a[j][i];
        }
       b[p]=sum;
       p++;
    }
    //diagonal sum
    sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+a[i][i];
    }
     b[p]=sum;
       p++;
    sum=0;
    for(int i=1,j=n;i<=n;i++,j--){
        sum=sum+a[i][j];
    }
    b[p]=sum;
       p++;
       //compairing
       sum=0;
       for(int i=1;i<2*n+2;i++){
        if(b[0]!=b[i]){
            sum=1;
        cout<<"Not a Magic matrix";
        break;
        }
       }
       if(sum==0)
        cout<<"Magic matrix";
       
    }