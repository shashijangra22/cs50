#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main()
{
    string a=GetString();
    printf("%c",toupper(a[0]));
    for(int i=1; i<strlen(a); i++)
    {
        if(a[i]==' ')
            printf("%c",toupper(a[i+1]));            
    }
    printf("\n");
    return 0;
}
