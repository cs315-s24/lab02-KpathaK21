#include <stdio.h>
#include <stdlib.h>

int add4_c(int, int, int, int);
int add4_s(int, int, int, int);

int main(int argc, char **argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    
 
    int add = add4_c(a, b, c, d);
    printf("C: %d\n", add);

    add = add4_s(a, b, c, d);
    printf("Asm: %d\n", add);

    return 0;
}
