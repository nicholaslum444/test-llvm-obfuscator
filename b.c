#include <stdio.h>
int main() {
    char a = 0x80;
    char b = 2;
    char c = a * b;
    printf("%d * %d = %d\n", a, b, c);

    char r = 1;
    char x = a + r;
    printf("%d + %d = %d\n", a, r, x);
    char y = x * b;
    printf("%d * %d = %d\n", x, b, y);
    char z = y - r;
    printf("%d - %d = %d\n", y, r, z);
}
