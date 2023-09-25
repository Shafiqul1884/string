#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(0<=a<=9 && 0<=b<=9 && 0<=c<=9)
        {
            if(a+b>=10 || a+c>=10 || c+b>=10)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
    }

}
