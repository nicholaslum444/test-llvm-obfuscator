#include <stdio.h>
int main() {
    int a = 1;
    int b = 2;
    int c = a + b; // 3 = 1 + 2
    int d = c - a; // 2 = 3 - 1
    int e = c * d; // 6 = 3 * 2
    int f = c / d; // 1 = 3 / 2
    int g = e ^ d; // 4 = 100 = 110 XOR 010
    int h = e & d; // 2 = 010 = 110 AND 010
    int i = e | d; // 6 = 110 = 110 OR  010

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = a + b = 1 + 2 = %d\n", c);
    printf("d = c - a = 3 - 1 = %d\n", d);
    printf("e = c * d = 3 * 2 = %d\n", e);
    printf("f = c / d = 3 / 2 = %d\n", f);
    printf("g = e ^ d = 6 ^ 2 = %d\n", g);
    printf("h = e & d = 6 & 2 = %d\n", h);
    printf("i = e | d = 6 | 2 = %d\n", i);
}
