#include <cstdlib>
#include <time.h>
#include <iostream>
#include "quickSortRP.h"
using namespace std;

/* Checks to see if low < high, and partitions if true */
void quickSortRP::quickSort(int val[], int low, int high) {
    if (low < high) {

        int pi = partitionr(val, low, high);

        quickSort(val, low, pi - 1);
        quickSort(val, pi + 1, high);
    }
}

/* Makes random pivot and swaps pivot */
int quickSortRP::partitionr(int val[], int low, int high) {
    srand(time(NULL));
    int random = low + rand() % (high - low);

    swap(val[random], val[high]);

    return partition(val, low, high);
}

/* Moves pivot to the correct postion */
int quickSortRP::partition(int val[], int low, int high) {
    int pivot = val[high];

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (val[j] <= pivot) {
            this->count++;
            i++;
            swap(val[i], val[j]);
        }
    }
    swap(val[i + 1], val[high]);
    return (i + 1);
}

/* prints numbers in input array */
void quickSortRP::display(int vals[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (vals[i] <= 9999) {
            cout << vals[i] << " ";
        }
    }
    cout << "" << endl;
}
