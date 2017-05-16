#include <stdio.h>
#include "algorithms.h"
#include <time.h>

void pr() {
    pollard_rho(44895587973889);
}

void td() {
    trial_division(44895587973889);
}

int main() {
    clock_t t;
    t = clock();
    td();
    t = clock() - t;
    double td_time = ((double)t)/CLOCKS_PER_SEC;

    t = clock();
    pr();
    t = clock() - t;
    double pr_time = ((double)t)/CLOCKS_PER_SEC;

    printf("pr: %f\ntd: %f", pr_time, td_time);
    return 0;
}
