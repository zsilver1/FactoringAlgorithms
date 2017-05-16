#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <math.h>
#include <stdlib.h>

typedef unsigned long long int bigint;

bigint gcd(bigint a, bigint b);

bigint trial_division(bigint n);

bigint pollard_rho(bigint n);
#endif
