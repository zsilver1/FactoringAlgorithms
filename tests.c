#include "algorithms.h"
#include <stdio.h>
#include <assert.h>

void gcd_test();
void trial_division_test();
void pollard_rho_test();

int main() {
    // gcd_test();
    // trial_division_test();
    pollard_rho_test();
    printf("All tests passed!\n");
    return 0;
}

void gcd_test() {    
    assert(gcd(16,12) == 4);
    assert(gcd(4525,246) == 1);
    assert(gcd(2439852,24351) == 3);
    assert(gcd(4904790,2452395) == 2452395);
    assert(gcd(2147483637,2452395) == 3);
}

void trial_division_test() {
    assert(trial_division(43) == 1);
    assert(trial_division(22619) == 1);
    assert(trial_division(84991) == 1);
    assert(trial_division(104381) == 1);
    assert(trial_division(42) == 2);
    assert(trial_division(45) == 3);
    assert(trial_division(5228302249) == 72307);
}


void pollard_rho_test() {
    assert(pollard_rho(43) == 1);
    assert(pollard_rho(22619) == 1);
    assert(pollard_rho(84991) == 1);
    assert(pollard_rho(104381) == 1);
    assert(42 % pollard_rho(42) == 0);
    assert(45 % pollard_rho(45) == 0);
    assert(5228302249 % pollard_rho(5228302249) == 0);
}
