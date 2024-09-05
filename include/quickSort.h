#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <algorithm> 
#include <vector>

//COMPLETO

// Time complexity: O(nlogn)

// implementation with arrays
template <typename T>
void quickSort(T arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// implementation with vectors
template <typename T>
void quickSort(std::vector<T>& v, int low, int high);

template <typename T>
int partition(std::vector<T>& v, int low, int high);

// Template function for partitioning the vector
template <typename T>
int partition(std::vector<T>& vec, int low, int high) {
    T pivot = vec[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (vec[j] <= pivot) { // Include elements equal to the pivot
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[high]); // Place the pivot in the correct position
    return i + 1;
}

// Template function for QuickSort on vectors
template <typename T>
void quickSort(std::vector<T>& vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}


#endif