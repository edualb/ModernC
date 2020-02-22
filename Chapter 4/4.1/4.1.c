#include <stdio.h>

int main(int argc, char* argv[]) {
    size_t three = 3;
    size_t ten = 10;

    printf("Hour 1: %zu\n", (three + ten) % 24);

    size_t eight = 8;
    size_t twenny = 20;

    printf("Hour 2: %zu\n", (twenny + eight) % 24);
}