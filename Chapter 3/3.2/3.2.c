#include <stdio.h>
#include <tgmath.h>

int main(void) {
    double const eps = 1E-9;
    double const a = 34.0;
    double x = 0.5;
    int i = 0;

    while(i <= 5) {
        x *= 2.0 - a*x;
        printf("value: %f\n", fabs(1.0 - a*x));
        i++;
    }

    return 0;
}