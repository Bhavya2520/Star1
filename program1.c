//This program is prepared by 22TCE115_Bhavya_Tank
#include<stdio.h>
int main()
{
int Ram,Shyam,Ajay;
printf("Enter Age Of Ram ");
scanf("%d",&Ram);
printf("Enter Age Of Shyam ");
scanf("%d",&Shyam);
printf("Enter Age Of Ajay ");
scanf("%d",&Ajay);
if (Ram==Shyam && Shyam==Ajay)
{
    printf("All are of equal age");
}
else if (Ram==Shyam)
{
    printf("Ram and Shyam are equal");
}
else if (Shyam==Ajay)
{
    printf("Shyam and Ajay are equal");
}
else if (Ram==Ajay)
{
    printf("Ram and Ajay are equal");
}
else{
    if (Ram<Shyam && Ram<Ajay){
        printf("Ram is Youngest");
    }
    else if (Shyam<Ram && Shyam<Ajay){
        printf("Shyam is youngest");
    }
    else{printf("Ajay is youngest");}
}
printf("\n22TCE115_Bhavya_Tank\n");
return 0;
}
