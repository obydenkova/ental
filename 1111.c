#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
char str[100];
char a[100];
int i,j,k,f,p;
double n;
j=0;
f=0;
fgets(str, 100, stdin);
for (i=0;i<=strlen(str);i++) {
if ((str[i]=='1')||(str[i]=='0')||(str[i]=='2')||(str[i]=='3')||(str[i]=='4')||(str[i]=='5')||(str[i]=='6')||(str[i]=='7')||(str[i]=='8')||(str[i]=='9')){
a[j]=str[i];
j+=1;
f=1;
}
if (f==0){
p+=1; 
}
}
n=atoi(a);
n=n*25.4;
for (i=0;i<=p-1;i++){
printf("%c",str[i]);
}
printf("%.2f",n);
for (i=p+j;i<=strlen(str);i++){
printf("%c",str[i]);
}
}
