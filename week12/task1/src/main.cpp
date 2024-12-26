#include <iostream>
#include <vector>
#include <chrono>
#include "glog/logging.h"
#include "../include/number.hpp"

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);
    google::SetStderrLogging(google::GLOG_INFO); 

    if (argc < 2) {
        LOG(ERROR) << "Необходимо ввести хотя бы одно число.";
        return 1;
    }

    std::vector<int> numbers;
    for (int i = 1; i < argc; ++i) {
        try {
            numbers.push_back(std::stoi(argv[i]));
        } catch (const std::invalid_argument& e) {
            LOG(ERROR) << "Ошибка преобразования: " << argv[i] << " не является числом.";
            return 1;
        }
    }

    // Work Stealing
    auto start = std::chrono::high_resolution_clock::now();
    auto primesWorkStealing = workStealingFindPrimes(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationWorkStealing = end - start;

    LOG(INFO) << "Метод Work Stealing: найдено простых чисел: " << primesWorkStealing.size()
              << ", время выполнения: " << durationWorkStealing.count() << " секунд.";

    // Shuffle
    start = std::chrono::high_resolution_clock::now();
    auto primesShuffle = shuffleAndFindPrimes(numbers);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationShuffle = end - start;

    LOG(INFO) << "Метод Shuffle: найдено простых чисел: " << primesShuffle.size()
              << ", время выполнения: " << durationShuffle.count() << " секунд.";

    google::ShutdownGoogleLogging();
    return 0;
}






