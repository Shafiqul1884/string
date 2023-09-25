#include<stdio.h>
int main()
{
    char name[]="shafiqul";
    int i=0;
    while(i<=7)//alternative way = while(name[i]='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    return 0;
}
