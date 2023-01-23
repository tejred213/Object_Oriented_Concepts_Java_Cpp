#include<stdio.h>
int even(int num)
{
return(num%2==0);
}
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
if(even(num))
{
printf("%d is even\n", num);
}
else
{
printf("%d is odd\n", num);
}
return 0;
}