#include<math.h>
#include <stdio.h>
#include <float.h>
double function(double arg)
{
return cos(arg)*cos(arg)*2-2;
}
double epsil(void)
{
double e = 1.0;
while((1+(e/2.0))>1) e/=2.0;
return e;
}
double factorial(double n)
{
double number = 1;
int i;
for(i=1;i<=n;i++) number*=i;
return number;
}
int main()
{
#define A 0.0
#define B 0.5
int constanta;
scanf("%d",&constanta);
double interval = (B - A)/constanta;
double arg1;
int n = 0;
printf("Итерация\tЗначение X\t  Значение функции\t Значение по Тейлору \n");
for(arg1 =A;arg1<=B;arg1+=interval)
{
double sum_Telor =0;
double i,member;
int calk =0;
for(i=1;i<=100;i++)
{
calk++;
if (calk%2 == 1) member = (pow(2,i*2)*pow(arg1,i*2)/factorial(i*2))*(-1);
else member = (pow(2,i*2)*pow(arg1,i*2)/factorial(i*2));
if (epsil()>= fabs (member)) break;
else sum_Telor+=member;
n++;
}
printf( "|n = %d|  \t |%.2lf| \t |%.15lf|\t |%.15lf| \n",n,arg1,function(arg1),sum_Telor);
n = 0;
}
return 0;
}

