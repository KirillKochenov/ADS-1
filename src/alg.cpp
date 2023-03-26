// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value < 2) {
        return false;
    }
    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t  prost = 1;
    int num = 0;
    while (true) {
        bool chek = true;
        ++prost;
        if (prost != 2) {
            for (int i = 2; i < prost; ++i) {
                if (prost % i == 0)
                    prost = false;
            }
        }
        if (chek == true)
            num++;
        if (num == n)
            return prost;
    }
}

uint64_t nextPrime(uint64_t value) {
    while (1) {
        uint64_t k = 1;
        value++;
        for (uint64_t i = 2; i <=value ; i++) {
            if (value % i == 0) {
                k++;
            }
        }
        if (k == 2) {
            return value;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t  summ = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            summ += i;
        }
    }
    return summ;
}
