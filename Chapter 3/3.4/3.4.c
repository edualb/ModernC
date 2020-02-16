#include <stdio.h>

int main(int argc, char* argv[]) {
    int count = 3;
    switch (count) {
    default: puts("+++++....+++++");
    case 4: puts("++++");
    case 3: puts("+++");
    case 2: puts("++");
    case 1: puts("+");
    }

}