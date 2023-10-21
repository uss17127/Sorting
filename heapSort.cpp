#include <iostream>
#include "heapSort.h"
using namespace std;

/* Builds  and takes elements from heap. Calls reheapDown as well to rearrange heap to maintain itself. */
void heapSort::HeapSort(int values[], int numValues) {
    for (int i = numValues/2 - 1; i >= 0; i--) {
        reheapDown(values, numValues, i);
    }
    for (int i = numValues - 1; i >= 1; i--) {
        swap(&values[0], &values[i]);
        reheapDown(values, i, 0);
    }
}

/* Rearranges heap to maintain heap property. */
void heapSort::reheapDown(int values[], int root, int bottom) {
    int largest = bottom;
    int l = 2 * bottom + 1;
    int r = 2 * bottom + 2;


    if (l < root && values[l] > values[largest]) {
        largest = l;
        this->count++;
    }

    if (r < root && values[r] > values[largest]) {
        largest = r;
        this->count++;
    }

    if (largest != bottom) {
        swap(&values[bottom], &values[largest]);
        reheapDown(values, root, largest);
    }
}

/* swaps two values iwthin array */
void heapSort::swap(int *val, int *min) {

    int temp = *min;
    *min = *val;
    *val = temp;

}

/* prints out the input array */
void heapSort::display(int vals[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (vals[i] <= 9999) {
            cout << vals[i] << " ";
        }
    }
    cout << "" << endl;
}
