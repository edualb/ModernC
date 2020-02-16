#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (strcmp(argv[1], "m")) {
        puts("this is magpie");
    } else if (strcmp(argv[1], "r")) {
        puts("this is a raven");
    } else if (strcmp(argv[1], "j")) {
        puts("this is a jay");
    } else {
        puts("this is an unknow corvid");
    }
    return 0;
}