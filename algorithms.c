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

bigint g(bigint x, bigint n) {
    return ((x * x) + 1) % n;
}

bigint absSubtract(bigint x, bigint y) {
    if (y > x) {
        return y - x;
    }
    return x - y;
}

bigint pollard_rho(bigint n) {
    bigint x = 2;
    bigint y = 2;
    bigint d = 1;
    while (d == 1) {
        x = g(x, n);
        y = g(g(y, n), n);
        d = gcd(absSubtract(x, y), n);
    }
    if (d == n) {
        return 1;
    }
    return d;
}
