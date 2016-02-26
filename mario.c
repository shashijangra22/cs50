#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int h;
    do
    {
        printf("Height: ");
        h=GetInt(); 
    }while(h>23 || h<0);    //getting a valid input    
    for(int i=1; i<=h; i++)     //for no. of lines
    {
        for(int j=i+1; j<=h; j++)   //for no. of spaces
            printf(" ");
        for(int k=0; k<=i; k++)     //for no. of #s
            printf("#");
        printf("\n");       //for new line
    }
    return 0;
}
