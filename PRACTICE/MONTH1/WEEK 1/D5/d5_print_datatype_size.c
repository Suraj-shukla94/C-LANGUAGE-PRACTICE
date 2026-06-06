#include <stdio.h>

int main() {
    printf("Size of char = %zu bytes\n", sizeof(char));
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of long = %zu bytes\n", sizeof(long));

    return 0;
}

/* Size of char = 1 bytes
Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of long = 8 bytes */