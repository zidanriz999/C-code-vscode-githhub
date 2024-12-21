#include<stdio.h>
#include<math.h>
int main()
{
int num, realnum, rem = 0, mod, n = 0;
printf("Give me a number:");
scanf("%d", &realnum);
num = realnum;
while (num != 0)
{
num =num/10;
n++;
}
num = realnum;
while (num != 0)
{
mod = num/10;
rem =rem+pow(mod, n);
num =num/10;
}
if (rem == realnum)
printf("%d is an Armstong number.\n", realnum);
else
printf("%d is not an Armstong number.\n", realnum);
return 0;
}