#include "perms.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

void generatePermutations(int* nums, int start, int size, int** result, int& count) {
    if (start == size) {
        for (int i = 0; i < size; i++) {
            result[count][i] = nums[i];
        }
        count++;
        return;
    }

    for (int i = start; i < size; i++) {
        bool skip = false;
        for (int j = start; j < i; j++) {
            if (nums[j] == nums[i]) {
                skip = true;
                break;
            }
        }
        if (skip) continue;

        swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, size, result, count);
        swap(nums[start], nums[i]); // backtrack
    }
}

int** perms(int* nums, int size, int& totalPerms) {
    sort(nums, nums + size); 

    totalPerms = 1;
    for (int i = 1; i <= size; i++) {
        totalPerms *= i; // Факториал
    }

    int** result = new int*[totalPerms];
    for (int i = 0; i < totalPerms; i++) {
        result[i] = new int[size];
    }

    int count = 0;
    generatePermutations(nums, 0, size, result, count);
    return result;
}

