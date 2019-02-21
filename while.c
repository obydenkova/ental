#include <stdio.h>
int main(void){
  int sum = 0;
  int i=0;
  do
    {i++;
      sum += i;
    }
  while (i<1000);    
  printf("Sum is from 1 to 1000: %d\n", sum);
return 0;
}
