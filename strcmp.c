#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="jerry";
    char string2[]="ferry";
    int i,j,k;
    i=strcmp(string1,"jerry");
    j=strcmp(string1,string2);
    k=strcmp(string1,"jerry boy");
    printf("%d %d %d",i,j,k);
    return 0;
}
