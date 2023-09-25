#include<stdio.h>
int main()
{
    int n,x,i,z,mid;

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
    int low = 0,high = n-1;
    for(i=0;i<n-1;i++)
    {
         mid = (low+high)/2;
         z=a[mid];
         if(z<x)
         {
             low=mid+1;
         }
         else if(z>x)
         {
             high = mid-1;
         }
         else if(z==x)
         {
            count++;
            break;
         }

    }

    if(count == 0)
        printf("element NOT fouund");

    else
        printf("element found at index %d",mid);
}
