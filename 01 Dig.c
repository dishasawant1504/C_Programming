#include<stdio.h>
#include<conio.h>
int main()
{
int No=0,Temp=0,dSum=0,dig=0;
printf("\n Enter a Number:");
scanf("%d",&No);
Temp=No;
while(Temp!=0)
{
dig=Temp%10;
dSum=dSum+(Temp%10);
Temp=Temp/10;
}
printf("\n\n DigitSum %d=%d.",No,dSum);
getch();
return 0;
}