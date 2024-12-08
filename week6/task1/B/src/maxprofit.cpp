#include "maxprofit.hpp"
#include <algorithm>
#include <limits.h>

int maxProfit(int prices[], int size) {
    int minPrice = INT_MAX; 
    int maxProfit = 0;      

    for (int i = 0; i < size; ++i) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; 
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice; 
        }
    }

    return maxProfit;
}

