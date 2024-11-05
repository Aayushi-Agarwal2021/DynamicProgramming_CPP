#include <iostream>
#include "fibonacci_helper.cpp"
#include "fibonacci_rec.cpp"
#include "fibonacci_memo.cpp"
#include "fibonacci_tab.cpp"
#include "fibonacci_optimized.cpp"

void testFibonacci(FibonacciSolver* solver, int n) {
    std::cout << "Result for n = " << n << ": " << solver->solve(n) << std::endl;
}

int main() {
    int n = 10; // Change this to test with different inputs

    RecursiveFibonacci recursiveSolver;
    MemoizedFibonacci memoizedSolver;
    TabulatedFibonacci tabulatedSolver;
    OptimizedFibonacci optimizedSolver;

    std::cout << "Recursive Approach:\n";
    testFibonacci(&recursiveSolver, n);

    std::cout << "\nMemoized Approach:\n";
    testFibonacci(&memoizedSolver, n);

    std::cout << "\nTabulated Approach:\n";
    testFibonacci(&tabulatedSolver, n);

    std::cout << "\nOptimized Approach:\n";
    testFibonacci(&optimizedSolver, n);

    return 0;
}