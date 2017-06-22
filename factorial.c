#include<stdio.h>

void main(void)
{int i=0;j=0;ans=1;
printf("Enter a number: ");
scanf("%d", & i);
if(i>0)
{
for(j=1;j<=i;j++)
{
ans = ans*j;
}
printf("Factorial of number is : %d", ans);
}
else
{printf("Please enter positive number");
}
}
