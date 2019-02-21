#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b)
{
  if (a>b) {return a;}
  return b;
}
int min(int a,int b)
{
  if (a<b) {return a;}
  return b;
}
int abs(int a)
{
  if (a>=0){return a;}
  return -1*a;
}
int sign(int a)
{
  if (a>0){return 1;}
  if (a<0){return -1;}
  return 0;
}
int newi(int a, int b, int c, int d)
{
  int i = ((abs(a-b))*c-(abs(b-c))*a-(abs(a-c))*b)%20 -d;
  return i;
}
int newj(int a, int b, int c, int d)
{
  int j = min(a,b)*max(b,c)*min(a,c)%25+5*sign(b)+d;
  return j;
}
int newl(int a, int b, int c, int d)
{
  int l = abs(c)*sign(a-b)-abs(a)*sign(b-c)+abs(b)*sign(a-c);
  return l;
}
int check(int i, int j)
{
  if((i+j+10)<=0 && (i+j+20)>=0)
    {return 1;}
  return 0;
}

int main()
{
  int i,j,k,l;
  int flag = 0;
  i = -25;
  j = -9;
  l = -8;

  for(k = 0;k < 51;k++)
    {
      flag = check(i,j);
      if(flag == 1)
	{
	  break;
	}
      i = newi(i,j,l,k);
      j = newj(i,j,l,k);
      l = newl(i,j,l,k);
    }

  if(flag == 0)
    {printf("Didn't reach, time is out\n");}
  if(flag == 1)
    {printf("Reached, coordinats are (%d,%d), time is %d\n",i,j,k);}
  return 0;
}
