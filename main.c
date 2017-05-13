#include <stdio.h>
#include "algorithms.h"

int main() {
    bigint a = 105;
    bigint b = 25;
    bigint g = gcd(a, b);
    printf("%llu", g);
    return 0;
}
