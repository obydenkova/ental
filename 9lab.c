#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int max(int a, int b)
{
  if (a>b)
    return a;
  else
    return b;
}
int min(int a, int b)
{
  if(a<b)
    return a;
  else
    return b;
}

int main()
{
  int (i=-22,j=14,l=-14,f=0,k,ik,jk);
  for(k=0;k<50;k++)
    ik=i;
  jk=j;
  i=((ik min (jk,l)+jk min (ik,l)+k^2)%20);
  j=((ik%10-k)*(jk%10+k)*(l%10-k)%25);
  l=(max(min (ik+jk,ik+l)%25, max (ik+l,jk+k)%20)+10);
}
int check(int i, int j)
{
  if((i+j+10)<=0 && (i+j+20)>=0)
    {return 1;}
  return 0;
}
{
  if((f!=0)&&(k==0))
    printf("intersection time=%d\n Koordinat=(%d,%d)\n param=%d",k+1,i,j,l);
  if((f!=0)&&(k!=0))
    printf("intersection time=%d\n Koordinat=(%d,%d)\n param=%d",k,i,j,l);
  if(f==0)
    printf("no intersection time=%d\n Koordinat=(%d,%d)\n param=%d",k+1,i,j,l);
  return 0;
}
