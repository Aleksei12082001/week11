#include "fibonacci.hpp"

std::unordered_map<int, long long> cache;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (cache.count(n)) {
        return cache[n];
    }

    cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return cache[n];
}





