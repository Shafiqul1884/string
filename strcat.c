#include<stdio.h>
int main()
{
    char str1[30]="Md.Shafiqul ";
    char str2[30]="Islam";
    strcat(str1,str2);
    strcat(str2,"Islam is the best religion");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    return 0;
}
