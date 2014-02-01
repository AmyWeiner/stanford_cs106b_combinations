/*
 * File: Combinations.cpp
 * ----------------------
 * Name: [TODO: Amy R. Weiner]
 * Section: [TODO: enter section leader here]
 * This program calculates the result of the
 * combinations function C(n, k) by employing
 * recursion. 
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
using namespace std;

/* Function prototypes */
int combinations (int n, int k);

/* Main program */
int main() {
    int n = getInteger("Please enter a value for n: ");
    int k = getInteger("Please enter a value for k: ");
    int c = combinations(n, k);
    cout << "C(n, k) = " << c;
   return 0;
}

/* Function: combinations
 * Usage: int c = combinations(n, k);
 * ------------------------------------------
 * This function returns the result of the
 * calculation of the mathematical 
 * combinations function C(n, k), which 
 * represents the number of ways one can 
 * select k elements from a set of size n.
 */
int combinations (int n, int k) {
    if ((k == 0) || (n == k)) {
        return 1;
    } else {
        return combinations(n - 1, k -1) + combinations(n - 1, k);
    }
}


