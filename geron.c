#include <stdio.h>
#include <math.h>
int main() {
double a,b,c,p,S; //p-полупериметр, S-площадь
printf("Введите a,b,c:\n");
scanf("\n %lf%lf%lf", &a,&b,&c);
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
printf("\n p = %5.1f S = %10.2f \n", p, S);
};
