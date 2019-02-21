#include <stdio.h>
int main()
{int a;
    printf ("Таблица умножения на 5\n");
  for (int i=1; i<=10; i++)
    {

      a=i*5;
      printf ("5 * %d = %d\n", i, a);
    }
  return 0;
}
