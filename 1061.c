#include<stdio.h>
int main()
{
    int n,e,h,m,s,h1,m1,s1,d;
    int x,y,z;
    char c;
    printf("Dia ");
    scanf("%d",&n);

    scanf("%d %c %d %c %d",&h,&c,&m,&c,&s);

    printf("Dia ");
    scanf("%d",&e);

    scanf("%d %c %d %c %d",&h1,&c,&m1,&c,&s1);

    if(h<=h1)
    {
        d = e-n;
        x = h1-h;
        m = abs(m-m1);
        s = abs(s-s1);
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n0 segundo(s)\n",d,x,m,s);
    }
    else if(h>h1)
    {
        d = (e-n)-1;
        x = 24-(h-h1);
        m = abs(m-m1);
        s = abs(s-s1);
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n0 segundo(s)\n",d,x,m,s);
    }

    return 0;
}
