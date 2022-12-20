#include<stdio.h>
void main()
{
    int n;
    printf("enter the number for which u want prime number\n");
    scanf("%d",&n);
    for( int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            int c=0;
            for( int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
            }
             if(c==0)
            printf("%d is prime no.\n",i);
        }

    }
}
