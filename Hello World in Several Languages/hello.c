#include <stdio.h>

void hello(char* name);

int main(int argc, char* argv[]) {
    int i = 0;
    fputs("Hello C!\n", stdout);
    for(i = 0; i < argc; ++i)
        hello(argv[i]);
    return 0;
}

void hello(char* name) {
    printf("Hello %s\n", name);
}
