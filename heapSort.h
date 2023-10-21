#ifndef HEAPSORT_H
#define HEAPSORT_H

class heapSort {
public:
    int count = 0;
    void HeapSort(int values[], int numValues);
    void reheapDown(int values[], int root, int bottom);
    void swap(int *val, int *min);
    void display(int vals[], int size);
};

#endif
