// This code is made by the one and only Benjamin.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){


float a, b, c, d, x = atoi(argv[1]), y = atoi(argv[2]);
a = x + y;
b = x - y;
c = x * y;
d = x / y;


printf("%.0f + %.0f = %.0f\n", x, y, a);
printf("%.0f - %.0f = %.0f\n", x, y, b);
printf("%.0f * %.0f = %.0f\n", x, y, c);
printf("%.0f / %.0f = %.2f\n", x, y, d);
return 0 ;
}
