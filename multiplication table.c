#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter a number for multiplication table : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a = n * i;
        printf("%d x %d = %d\n",n,i,a);
    }
}
