#include "fibonacci_helper.cpp"

class OptimizedFibonacci : public FibonacciSolver {
public:
    int solve(int n) override {
        if (n <= 1) return n;
        int prev2 = 0, prev1 = 1;
        for (int i = 2; i <= n; ++i) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
