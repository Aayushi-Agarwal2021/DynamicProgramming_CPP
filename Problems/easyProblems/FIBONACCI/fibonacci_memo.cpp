#include "fibonacci_helper.cpp"
#include <unordered_map>

class MemoizedFibonacci : public FibonacciSolver {
private:
    std::unordered_map<int, int> memo;

public:
    int solve(int n) override {
        if (n <= 1) return n;
        if (memo.find(n) != memo.end()) return memo[n];
        memo[n] = solve(n - 1) + solve(n - 2);
        return memo[n];
    }
};