#include<stdio.h>

int main(void) {

    double A[5] = {
        9.0,
        2.9,
        3.E+25,
        .00007
    };

    for(int i = 0; i < 5; ++i) {
        if (i) {
            printf("element %d is %g, \tits square is %g\n", i, A[i], A[i]*A[i]);
        }
    }

    return 0;
}