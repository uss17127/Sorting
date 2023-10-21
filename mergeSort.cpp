#include <iostream>
#include "mergeSort.h"
using namespace std;

/* Recursively calls merge sort to divide array further and further until arrays need to be merged. */
void mergeSort::MergeSort(int values[], int first, int last) {
    if (first < last) {
        int middle = first+(last-first) / 2;
        MergeSort(values, first, middle);
        MergeSort(values, middle + 1, last);
        merge(values, first, middle, last);
    }
}

/* Merges the subarrays array1 and array2 and orders them.*/
void mergeSort::merge(int vals[], int left, int middle, int right) {
    int arr1 = middle - left + 1;
    int arr2 = right - middle;

    int array1[arr1];
    int array2[arr2];

    for (int i = 0; i < arr1; i++) {
        array1[i] = vals[left + i];
    }
    for (int j = 0; j < arr2; j++) {
        array2[j] = vals[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < arr1 && j < arr2) {
        if (array1[i] <= array2[j]) {
            this->count++;
            vals[k] = array1[i];
            i++;
        } else {
            this->count++;
            vals[k] = array2[j];
            j++;
        }
        k++;
    }


    while (i < arr1) {
        vals[k] = array1[i];
        i++;
        k++;
    }

    while (j < arr2) {
        vals[k] = array2[j];
        j++;
        k++;
    }
}

/* prints out ordered array */
void mergeSort::display(int vals[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        //if (vals[i] <= 9999) {
            cout << vals[i] << " ";
            //}
    }
    cout << "" << endl;
}
