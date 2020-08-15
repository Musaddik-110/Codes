#include<stdio.h>
#include<ctype.h>
void print_upper(char *string);
int main()
{
    char s[80];
    printf("enter a string\n");
    gets(s);
    print_upper(s);
    printf("\n s is now upper case :%s",s);
    return 0;
}
void print_upper(char *string)
{
    register int t;
    for(t=0;string[t];++t)
    {
        string[t]=toupper(string[t]);
        putchar (string[t]);
    }
}
