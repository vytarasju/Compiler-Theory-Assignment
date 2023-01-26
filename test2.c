#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tiny_readreal ( float *x, char *s ) {
  printf("%s ", s);
  scanf("%f", x);
}
void tiny_writereal ( float x, char *s ) {
  printf("%s ", s);
  printf("%f\n", x);
}
int main ( )
{ float r;
tiny_readreal(&r, "Please input a real number as the radius of a circle:");
tiny_writereal(2 * 3.140000 * r, "The circumference of the circle is");
}
