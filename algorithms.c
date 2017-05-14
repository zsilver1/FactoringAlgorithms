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

bigint trial_division(bigint n) {
    bigint limit = floor(sqrt(n));
    for (bigint i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}


bigint quadratic_sieve(bigint n) {
    
}
