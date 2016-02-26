#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("BAD INPUT");
        return 1;
    }
    char temp;
    int key=atoi(argv[1])%26;
    string plain=GetString();
    int l=strlen(plain);
    for(int i=0; i<l; i++)
    {
        if(isalpha(plain[i]))
        {
            temp=plain[i]+key;
            if(isupper(plain[i]))
            {
                if(isupper(temp))
                    printf("%c",temp);
                else
                    printf("%c",temp-26);    
            }
            else
            {
                if(islower(temp))
                    printf("%c",temp);
                else
                    printf("%c",temp-26);
            }
        }
        else
            printf("%c",plain[i]);
    }
    printf("\n");
    return 0;
}
