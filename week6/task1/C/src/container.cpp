#include "container.hpp"
#include <algorithm>

Container::Container(int heights[], int size) {
    this->heights = heights;
    this->size = size;
}

int Container::maxArea() const {
    int left = 0;
    int right = size - 1;
    int maxArea = 0;

    while (left < right) {
        int width = right - left;
        int currentHeight = std::min(heights[left], heights[right]);
        maxArea = std::max(maxArea, width * currentHeight);
        
       
        if (heights[left] < heights[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}




