#include "../include/number.hpp"
#include <algorithm>
#include <thread>
#include <future>
#include <random>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

std::vector<int> findPrimes(const std::vector<int>& numbers) {
    std::vector<int> primes;
    for (int num : numbers) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

std::vector<int> shuffleAndFindPrimes(std::vector<int> numbers) {
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine());
    return findPrimes(numbers);
}

std::vector<int> workStealingFindPrimes(const std::vector<int>& numbers) {
    std::vector<std::future<std::vector<int>>> futures;
    size_t numThreads = std::thread::hardware_concurrency();
    size_t chunkSize = numbers.size() / numThreads;

    for (size_t i = 0; i < numThreads; ++i) {
        size_t start = i * chunkSize;
        size_t end = (i == numThreads - 1) ? numbers.size() : start + chunkSize;

        futures.emplace_back(std::async(std::launch::async, findPrimes, std::vector<int>(numbers.begin() + start, numbers.begin() + end)));
    }

    std::vector<int> primes;
    for (auto& future : futures) {
        auto result = future.get();
        primes.insert(primes.end(), result.begin(), result.end());
    }
    return primes;
}








