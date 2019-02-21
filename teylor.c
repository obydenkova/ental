#include <stdio.h>
#include <math.h>
#include <float.h>
double function(double x)
{
  return cosh(x);
  
}
double eps(void)
{
  double e = 1.0;
     while ((1.0 + (e / 2.0)) > 1.0) e /= 2.0;
     return e;
}
double factorial(double n)
{
double number=1;
 int i;
  for (i=1;i<=n;i++)
  number*=i;
  return number;
}
int main()
{
#define A 0.1
#define B 0.6
int constanta;
scanf("%d", &constanta);
double interval = (B-A)/constanta;
double x1;
int n=0;
printf("Итерация\t Значение X\t Значение функции\t Значение по Тейлору\n");
for (x1=A;x1<=B;x1+=interval)
{
double sum_Teylor=0;
double i,member;
int calk=0;
for (i=1;i<=100;i++)
{
  calk++;
  if(calk%2==1) member=(pow(x1,i*2)/factorial(i*2));
  else member=(pow(x1,i*2)/factorial(i*2));
  if(eps()>=fabs(member))
  break;
  else sum_Teylor+=member;
  n++;
}
printf("|n=%d| \t\t |%.2lf| \t |%.15lf| \t |%.15lf| \n", n,x1,function(x1),sum_Teylor);
n=0;
}
return 0;
}
