#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadratic_c(int , int , int , int);
int quadratic_s(int, int, int, int);

int main(int argc, char **argv) {
    if (argc != 5) {
        printf("Usage: %s <x> <a> <b> <c>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    int c = atoi(argv[4]);

	int quadratic = quadratic_c(x, a, b, c);
    printf("C: %d\n", quadratic_c(x, a, b, c));

    quadratic = quadratic_s(x, a, b, c);
    printf("Asm: %d\n", quadratic_s(x, a, b, c));

    return 0;
}
