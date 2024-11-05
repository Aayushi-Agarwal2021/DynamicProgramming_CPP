#include "fibonacci_helper.cpp"
class RecursiveFibonacci : public FibonacciSolver {
public:
    int solve(int n) override {
        if (n <= 1) return n;
        return solve(n - 1) + solve(n - 2);
    }
};
