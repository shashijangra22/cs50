#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float f;
    printf("O hai! ");
    do
    {
        printf("How much change is owed?\n");
        f=GetFloat();
    }while(f<0);                  //getting a valid input
    int cents=roundf(f*100);    //converting cents from input
    int counter=0;
        counter+=cents/25;      //counting coins of 25 cents
        cents%=25;
        counter+=+cents/10;     //counting coins of 10 cents
        cents%=10;
        counter+=cents/5;       //counting coins of 5 cents
        cents%=5;
    printf("%d\n",counter+cents); //printing total coins+remaining cents
    return 0;
}
