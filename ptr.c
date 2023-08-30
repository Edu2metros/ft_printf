#include "printf.h"
int main() {
    int x = 42;
    int *ptr = &x;

    printf("O valor de x é: %p\n", ptr);

    return 0;
}
