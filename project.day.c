#include<stdio.h>
int main()
{
     int unit,bill, total Fixed charge,Final bill;
    while(true)
    printf("=====Welcome to bill calculator=====");
    printf("\n 1.Home");
    printf("\n 2.Shop");
    printf("\n 3.Finish");
    printf("\nEnter the total used unit:");
    scanf("%d",&unit);
    if(unit==1)
    {
        printf("\nEnter the total home's used unit:");
        scanf("%d",&unit);
        total bill by used unit =unit*5.0;
        Fixed charge=50;
        Final Bill=total bill by used unit + Fixed charge;
        printf("\nThankyou");
    }
    else if(unit==2)
    {
        printf("Enter total shop's used unit:");
        scanf("%d",&unit);
        total blll by used unit=unit*9.0;
        Fixed charge=150;
        final bill=total bill by used unit + Fixed charge;
        printf("\nThankyou!");
    }
    else
    {
        printf("finish");
    }
    break;
    finish;

    return 0;

}