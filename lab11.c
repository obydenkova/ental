#include <stdio.h>

int main(){
  char x[100];
  char k;
  string s,s1;
  int i,j;
  j=0;
  read(s);
  for (i=0;i<=length(s);i++) {
    k=s[i];
    if ((k="1")||(k="0")||(k="2")||(k="3")||(k="4")||(k="5")||(k="6")||(k="7")||(k="8")||(k="9")){
      s[j]=k;
      k+=1;
    }
  }
  printf("%s",s1);
}
