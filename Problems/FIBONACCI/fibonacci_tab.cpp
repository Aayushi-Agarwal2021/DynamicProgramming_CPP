#include "fibonacci_helper.cpp"
#include <vector>

class TabulatedFibonacci : public FibonacciSolver {
public:
    int solve(int n) override {
        if (n <= 1) return n;
        std::vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};