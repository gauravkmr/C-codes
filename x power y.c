#include<stdio.h>          /*x to the power y*/
#include<conio.h>
main()
{
    int b,p,prod,loop;
    printf("enter the value of base and its power: ");
    scanf("%d%d",&b,&p);
    prod=1;
    for(loop=1;loop<=p;loop++)
    {
        prod=prod*b;
    }
        printf("%d",prod);
    getch();
}
