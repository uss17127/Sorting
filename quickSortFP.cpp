#include <iostream>
#include "quickSortFP.h"
using namespace std;

/*
   Checks to see if low < high, and partitions if true.
*/
void quickSortFP::quickSort(int val[], int low, int high) {
    if (low < high) {
        int pi = partition(val, low, high);

        quickSort(val, low, pi - 1);
        quickSort(val, pi + 1, high);
    }
}

/* Splits smaller values into the left*/
int quickSortFP::partition (int val[], int low, int high) {
    int pivot = val[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (val[j] < pivot) {
            count++;
            i++;
            swap(&val[i], &val[j]);
        }
    }
    swap(&val[i + 1], &val[high]);
    return (i + 1);
}

/* swaps two values within the input array*/
void quickSortFP::swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/* prints out numbers within array */
void quickSortFP::display(int vals[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (vals[i] <= 9999) {
            cout << vals[i] << " ";
        }
    }
    cout << "" << endl;
}
