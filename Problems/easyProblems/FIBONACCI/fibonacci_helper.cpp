#ifndef FIBONACCI_HELPER_CPP
#define FIBONACCI_HELPER_CPP
#include <iostream>
#include <vector>

class FibonacciSolver {
public:
    // Pure virtual function for solving Fibonacci numbers
    virtual int solve(int n) = 0;
    virtual ~FibonacciSolver() {}
};
#endif

