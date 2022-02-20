// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool a = true;
    for (int i = 1; i < value; i++) {
        if ((value % i == 0) && (i != 1)) {
            a = false;
            break;}
     }
     return (a);}

uint64_t nPrime(uint64_t n) {
    int m = 1;
    int y = 0;
    int i = 2;
    while (y < n) {
        bool a = true;
        for (int sr = 2; sr < i; sr++) {
            if (i % sr == 0) {
                a = false;
                break;}
        }
        if (a) {
            m = i;
            y++;}
        i++;}
    return(m);}

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
                break;}
        }
 }

uint64_t sumPrime(uint64_t hbound) {
    long sum = 0;
    int y = 2;
    bool a = true;
    while (y < hbound){
        a = true;
        for (int sr = 2; sr < y; sr++) {
            if (y % sr == 0) {
                a = false; }
        }
        if (a) {
            sum += y;
        }
        y++;
    }
    return(sum);
