#include<stdio.h>
int main()
{
    int n,x,i,j,min,temp;
    int a[100];
    printf("enter arr size = ");
    scanf("%d",&n);
    printf("enter arr element = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;

        }
             temp = a[min];
              a[min] = a[i];
        a[i] = temp;



    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
