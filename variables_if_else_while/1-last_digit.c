#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
*main-EntryPoint
*
*Description:Printthelastdigitofthe number storedinthevariablen
*Return:Always0ifSuccess.
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n=rand()-RAND_MAX/2;
last_digit=n%10;
if(last_digit>5)
{
printf("Lastdigitof%d is%d andisgreaterthan5\n",n,last_digit);
}
else if(last_digit==0)
{
printf("Lastdigitof%d is%d andis0\n",n,last_digit);
}
else
{
printf("Lastdigitof%d is%d and is less than 6 and not 0\n",n,last_digit);
}
return(0);
}

