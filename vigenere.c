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
    int l2=strlen(argv[1]);
    for(int i=0; i<l2; i++)
    {
        if(isdigit(argv[1][i]))
        {
            printf("BAD INPUT");
            return 1;
        }
    }
    char temp;
    string plain=GetString();
    int l1=strlen(plain);
    for(int i=0,j=0; i<l1; i++)
    {
        if(isalpha(plain[i]))
        {
            int key=(int)(toupper(argv[1][j%l2])-65);
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
            j++;
        }
        else
            printf("%c",plain[i]);
    }
    printf("\n");
    return 0;
}
