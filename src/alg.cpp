// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool a = true;
    for (int i = 1; i < value; i++) {
        if ((value % i == 0) && (i != 1)) {
            a = false;
            break; }
    }
    return (a);
}

uint64_t nPrime(uint64_t n) {
    int m = 1;
    int y = 0;
    int i = 2;
    while (y < n) {
        bool a = true;
        for (int sr = 2; sr < i; sr++) {
            if (i % sr == 0) {
                a = false;
                break; }
        }
        if (a) {
            m = i;
            y++; }
        i++; }
    return(m);
}

uint64_t nextPrime(uint64_t value) {
    int sr = value;
    while (true) {
        bool a = true;
        sr++;
        for (int i = 2; i < sr; i++) {
            if (sr % i == 0) {
                a = false;
                break; }
        }
        if (a) {
            return(sr);
            break; }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t n = 0;
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
      n = i;
      bool c = true;
      int kor = sqrt(n);
      for (int i = 2; i <= kor; i++) {
        if (0 == n%i) {
          c = false;
          break;
        }
      }
      if (c) {
        sum += n;
      }
    }
    return sum;
}
