#include <stdio.h>
int main()
{
  printf ("Перевод из дюймов в миллиметры ->\n");
  {
   float a;
   float b;
   printf("Введите количество дюймов: ");
    scanf ("%f", &a);
    b=a*25.4;

    printf ("%.4fin -> %.2fмм\n", a, b);
  }
  return 0;
}
