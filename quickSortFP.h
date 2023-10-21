#ifndef QUICKSORTFP_H
#define QUICKSORTFP_H

class quickSortFP {
public:
    int count = 0;
    void quickSort(int val[], int low, int high);
    int partition(int val[], int low, int high);
    void swap(int* a, int* b);
    void display(int vals[], int size);
};


#endif
