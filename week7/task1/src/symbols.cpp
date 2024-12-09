#include "symbols.hpp"
#include <unordered_map>
#include <algorithm>
#include <functional>

using namespace std;

pair<char, int> findMostFrequentChar(const string& str) {
    unordered_map<char, int> freqMap;

    for_each(str.begin(), str.end(), [&freqMap](char c) {
        freqMap[c]++;
    });

    auto maxElement = max_element(
        freqMap.begin(), freqMap.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second; // Сравнение по частоте
        }
    );

    return (maxElement != freqMap.end()) ? make_pair(maxElement->first, maxElement->second) : make_pair('\0', 0); // Возвращаем пару (символ, частота)
}
