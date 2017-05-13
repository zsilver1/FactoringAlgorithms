#include "algorithms.h"
#include <stdio.h>
#include <assert.h>

void gcd_test();

int main() {
    gcd_test();
    printf("All tests passed!!\n");
    return 0;
}

void gcd_test() {
    assert(gcd(2439852,24351) == 3);
}

