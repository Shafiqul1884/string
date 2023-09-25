#include <stdio.h>

int main()
{
    long long int x, y, c = 1, d;
    scanf("%lld", &x);
    y = x/10;

    int a, b = x % 10;

    while(x){
        a = x % 10;
        x/=10;
        c*=10;
    }

    d = y % (c/100);

    printf("%d %lld %d\n", b, d, a);

}
