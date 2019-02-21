#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
char str[100];
int i,n;
fgets(str,100,stdin);
str[0]='0';
n=atoi(str);
n=n/10;
printf("%d",n);
}

