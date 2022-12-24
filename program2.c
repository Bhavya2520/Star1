//This program is prepared by 22TCE115 Bhavya Tank
#include<stdio.h>
int main()
{
char credit;
int order,stock;
printf("Enter Your Credit  ");
scanf("%c",&credit);
if (credit=='y'|| credit=='Y'||credit=='n'|| credit=='N')
{
    if(credit=='y'|| credit=='Y')
    {
    printf("Enter order  ");
    scanf("%d",&order);
    printf("Enter stock  ");
    scanf("%d",&stock);
        if(stock>=order)
        {
            printf("your order will place");
        }
        else
        {
            printf("Sorry items are out of stock");
        }
    }

    else 
        {
        printf("please complete your credit first");
        }
}
else{
    printf("invalid input");
}

printf("\n22TCE115 Bhavya Tank");
return 0;
}
