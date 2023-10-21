#ifndef MERGESORT_H
#define MERGESORT_H

class mergeSort {
public:
    int count = 0;
    void MergeSort(int values[], int first, int last);
    void merge(int vals[], int left, int middle, int right);
    void display(int vals[], int size);
};

#endif
