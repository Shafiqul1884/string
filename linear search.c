#include<stdio.h>
int main()
{
    int n,x,i;
    int a[5];
    printf("enter arr size = ");
    scanf("%d",&n);
   printf("enter arr element = ");
    int count = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     printf("enter key = ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            count++;
            break;
        }

    }
    if(count == 0)
        printf("element NOT fouund");

    else
        printf("element found at index %d",i);
}
