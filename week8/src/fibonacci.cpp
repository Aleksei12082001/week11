#include "../include/fibonacci.hpp"


long long fibonacci_classic(int n) {
    if (n <= 1) return n;
    return fibonacci_classic(n - 1) + fibonacci_classic(n - 2);
}


long long fibonacci_optimized(int n) {
    if (n <= 1) return n;
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}









