#include "algorithms.h"

#include <stdio.h>

bigint gcd(bigint a, bigint b) {
    if (b > a) {
        // swap
        bigint tmp = a;
        a = b;
        b = tmp;
    }

    if (b == 0) {
        return a;
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
    if (n % 2 == 0) {
        return 2;
    }
    bigint limit = floor(sqrt(n));
    for (bigint i = 3; i <= limit; i+=2) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

static bigint g(bigint x, bigint n) {
    return ((x * x) + 1) % n;
}

bigint pollard_rho(bigint n) {
    bigint x = 2;
    bigint y = 2;
    bigint d = 1;
    bigint tmp;
    while (d == 1) {
        x = ((x * x) + 1) % n;;
        y = g(((y * y) + 1) % n, n);
        if (y > x) {
            tmp = y - x;
        } else {
            tmp = x - y;
        }
        d = gcd(tmp, n);
    }
    if (d == n) {
        return 1;
    }
    return d;
}
