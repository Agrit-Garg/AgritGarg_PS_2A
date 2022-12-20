#include<iostream>
float mean(int[]);
using namespace std;
int main()
{  int a[5];
     for(int i=0;i<5;i++){
        cin>>a[i];
     }
     cout<<mean(a);
   return 0;
}
float mean(int a[]){
    float s=0;
   for(int i=0;i<5;i++){
    s=s+a[i];
   }
   return (s/5);

}