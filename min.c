#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min_c(int, int);
int min_s(int, int);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

		int min = min_c(a,b);
	    printf("C: %d\n", min);
	
	   min = min_s(a,b);
	   printf("Asm: %d\n", min);

    return 0;
}
