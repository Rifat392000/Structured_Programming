#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s[20];
    printf("Enter a string=");
    gets(s);
   char s1[20];
    int c=0;
    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
        {
           s1[c]=s[i];
           c++;
        }
    }
    s1[c]='\0';
    printf("string=%s",s1);
    getch();

}

