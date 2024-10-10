#include <iostream>
#include "MergeSort.hpp"

using namespace std;

void merge(double data_array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    double* leftArray = new double[n1];
    double* rightArray = new double[n2];

    for (int i = 0; i < n1; i++)
        leftArray[i] = data_array[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = data_array[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            data_array[k] = leftArray[i];
            i++;
        } else {
            data_array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        data_array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        data_array[k] = rightArray[j];
        j++;
        k++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(double data_array[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(data_array, left, mid);
        mergeSort(data_array, mid + 1, right);
        merge(data_array, left, mid, right);
    }
}
