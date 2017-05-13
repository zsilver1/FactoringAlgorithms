#include "algorithms.h"

bigint gcd(bigint a, bigint b) {
    if (b > a) {
        // swap
        bigint tmp = a;
        a = b;
        b = tmp;
    }

    bigint r = a % b;
    while (r > 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
