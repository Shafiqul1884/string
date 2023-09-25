#include<stdio.h>
int main()
{
    int i,n,j,even=0,odd=0;
    int a[100];
    printf("Enter arr size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    return 0;
}
