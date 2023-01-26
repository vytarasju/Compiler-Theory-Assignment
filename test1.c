#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tiny_writeint ( int x, char *s ) {
  printf("%s ", s);
  printf("%d\n", x);
}
int main ( )
{ int x;
x = 1;
tiny_writeint(x, "x = ");
}
