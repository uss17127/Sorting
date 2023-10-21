#ifndef QUICKSORTRP_H
#define QUICKSORTRP_H

class quickSortRP {
public:
    int count = 0;
    void quickSort(int val[], int low, int high);
    int partitionr(int val[], int low, int high);
    int partition(int val[], int low, int high);
    void display(int vals[], int size);
};

#endif
