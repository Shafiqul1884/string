#include<stdio.h>
#include<string.h>
int main()
{
     int i,n;
     char a;

     printf("Test Case = ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        scanf(" %c", &a);
         if(48<=a && a<=57 )
         {
             printf("%c is a Digit\n",a);
         }

         else if(65<=a && a<=90 || 97<=a && a<=122){
             printf("\n%c is an Alphabet",a);
            if(a=='a' || a=='e' || a=='i' || a=='o' ||a=='u' || a=='A' ||a=='E' || a=='I' ||a=='O' || a=='U')
                printf(":It is an Vowel\n");
         }
         else
            printf("%c is a special character\n",a);
     }

     return 0;
}
