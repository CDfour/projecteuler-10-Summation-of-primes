#include "summation_of_primes.h"

// n = 2000000, answer = 142913828922
long long summation_of_primes(int n) {

    long long result = 0;

    int* a = new int[n + 1];

    for (int i = 0; i < n + 1; i++) {
        a[i] = i;
    }

    for (int p = 2; p < n + 1; p++) {

        if (a[p] != 0) {

            result += a[p];

            for (int j = p; j < n + 1; j += p) {
                a[j] = 0;
            }
        }
    }

    return result;
}