#include <iostream>
#include <string>
#include <time.h>
#include "selectionSort.h"
#include "mergeSort.h"
#include "heapSort.h"
#include "quickSortFP.h"
#include "quickSortRP.h"
using namespace std;

/* Shuffles array of numbers so array is not ordered. */
void shuffle(int *arr, size_t n) {
    size_t i;
    srand(time(NULL));
    for (i = 0; i < n - 1; i++) {
        size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = arr[j];
          arr[j] = arr[i];
          arr[i] = t;
    }
}

/* Main class create arrays of different sizes with numbers.
   Orders sized arrays using sort based off user input.
*/
int main() {
    int comparisons = 0;
    int size;
    string sortType;
    selectionSort sort1;
    mergeSort sort2;
    heapSort sort3;
    quickSortFP sort4;
    quickSortRP sort5;
    int arr1[10];
    int arr2[100];
    int arr3[500];
    int arr4[1000];
    int arr5[10000];
    int arr6[20000];
    int arr7[100000];
    int arr8[50000];


    for (int i = 0; i < 10; i++) {
        arr1[i] = i;
    }

    for (int i = 0; i < 100; i++) {
        arr2[i] = i;
    }

    for (int i = 0; i < 500; i++) {
        arr3[i] = i;
    }

    for (int i = 0; i < 1000; i++) {
        arr4[i] = i;
    }

    for (int i = 0; i < 10000; i++) {
        arr5[i] = i;
    }

    for (int i = 0; i < 20000; i++) {
        arr6[i] = i;
    }

    for (int i = 0; i < 100000; i++) {
        arr7[i] = i;
    }

    for (int i = 0; i < 50000; i++) {
        arr8[i] = i;
    }


    shuffle(arr1, 10);
    shuffle(arr2, 100);
    shuffle(arr3, 500);
    shuffle(arr4, 1000);
    shuffle(arr5, 10000);
    shuffle(arr6, 20000);
    shuffle(arr7, 100000);
    shuffle(arr8, 50000);

    cout << "Select Size" << endl;
    cin >> size;
    cout << "selection-sort (s)    merge-sort (m)    heap-sort (h) quick-sort-fp (q)    quick-sort-rp (r)" << endl;
    cout << "Select Sort" << endl;
    cin >> sortType;

    if(sortType.compare("s") == 0) {
        if (size == 10) {
            comparisons = sort1.selectSort(arr1, 10);
        }
        if (size == 100) {
            comparisons = sort1.selectSort(arr2, 100);
        }
        if (size == 500) {
            comparisons = sort1.selectSort(arr3, 500);
        }
        if (size == 1000) {
            comparisons = sort1.selectSort(arr4, 1000);
        }
        if (size == 10000) {
            comparisons = sort1.selectSort(arr5, 10000);
        }
        if (size == 20000) {
            comparisons = sort1.selectSort(arr6, 20000);
        }
        if (size == 100000) {
            comparisons = sort1.selectSort(arr7, 100000);
        }
        if (size == 50000) {
            comparisons = sort1.selectSort(arr8, 50000);
        }
        cout << "    #Selection-sort comparisons: "  << comparisons << endl;
    }


    if(sortType.compare("m") == 0) {
        if (size == 10) {
            sort2.MergeSort(arr1, 0, 10-1);
            //sort2.display(arr1, 10);
        }
        if (size == 100) {
            sort2.MergeSort(arr2, 0, 100-1);
            //sort2.display(arr2, 100);
        }
        if (size == 500) {
            sort2.MergeSort(arr3, 0, 500-1);
            //sort2.display(arr3, 500);
        }
        if (size == 1000) {
            sort2.MergeSort(arr4, 0, 1000-1);
            //sort2.display(arr4, 1000);
        }
        if (size == 10000) {
            sort2.MergeSort(arr5, 0, 10000-1);
            //sort2.display(arr5, 10000);
        }
        if (size == 20000) {
            sort2.MergeSort(arr6, 0, 20000-1);
            sort2.display(arr6, 20000);
        }
        if (size == 100000) {
            sort2.MergeSort(arr7, 0, 100000-1);
            //sort2.display(arr7, 100000);
        }
        if (size == 50000) {
            sort2.MergeSort(arr8, 0, 50000-1);
            //sort2.display(arr8, 50000);
        }
        comparisons = sort2.count;
        cout << "    #Merge-sort comparisons: "<< comparisons << endl;
    }



    if(sortType.compare("h") == 0) {
        if (size == 10) {
         sort3.HeapSort(arr1, 10);
         sort3.display(arr1, 10);
        }
        if (size == 100) {
            sort3.HeapSort(arr2, 100);
            //sort3.display(arr2, 100);
        }
        if (size == 500) {
            sort3.HeapSort(arr3, 500);
            //sort3.display(arr3, 500);
        }
        if (size == 1000) {
            sort3.HeapSort(arr4, 1000);
            //sort3.display(arr4, 1000);
        }
        if (size == 10000) {
            sort3.HeapSort(arr5, 10000);
            //sort3.display(arr5, 10000);
        }
        if (size == 20000) {
            sort3.HeapSort(arr6, 20000);
            //sort3.display(arr6, 20000);
        }
        if (size == 100000) {
            sort3.HeapSort(arr7, 100000);
            //sort3.display(arr7, 100000);
        }
        if (size == 50000) {
            sort3.HeapSort(arr8, 50000);
            //sort3.display(arr8, 50000);
        }
        comparisons = sort3.count;
        cout << "    #Heap-sort comparisons: " << comparisons << endl;
    }



    if(sortType.compare("q") == 0) {
        if (size == 10) {
            sort4.quickSort(arr1, 0, 10-1);
            //sort4.display(arr1, 10);
        }
        if (size == 100) {
            sort4.quickSort(arr2, 0, 100-1);
            //sort4.display(arr2, 100);
        }
        if (size == 500) {
            sort4.quickSort(arr3, 0, 500-1);
            //sort4.display(arr3, 500);
        }
        if (size == 1000) {
            sort4.quickSort(arr4, 0, 1000-1);
            //sort4.display(arr4, 1000);
        }
        if (size == 10000) {
            sort4.quickSort(arr5, 0, 10000-1);
            //sort4.display(arr5, 10000);
        }
        if (size == 20000) {
            sort4.quickSort(arr6, 0, 20000-1);
            //sort4.display(arr6, 20000);
        }
        if (size == 100000) {
            sort4.quickSort(arr7, 0, 100000-1);
            //sort4.display(arr7, 100000);
        }
        if (size == 50000) {
            sort4.quickSort(arr8, 0, 50000-1);
            //sort4.display(arr8, 50000);
        }
        comparisons = sort4.count;
        cout << "    #Quick-sort-fp comparisons: " << comparisons << endl;
    }



    if(sortType.compare("r") == 0) {
        if (size == 10) {
            sort5.quickSort(arr1, 0, 10-1);
            //sort5.display(arr1, 10);
        }
        if (size == 100) {
            sort5.quickSort(arr2, 0, 100-1);
            //sort5.display(arr2, 100);
        }
        if (size == 500) {
            sort5.quickSort(arr3, 0, 500-1);
            //sort5.display(arr3, 500);
        }
        if (size == 1000) {
            sort5.quickSort(arr4, 0, 1000-1);
            //sort5.display(arr4, 1000);
        }
        if (size == 10000) {
            sort5.quickSort(arr5, 0, 10000-1);
            //sort5.display(arr5, 10000);
        }
        if (size == 20000) {
            sort5.quickSort(arr6, 0, 20000-1);
            //sort5.display(arr6, 20000);
        }
        if (size == 100000) {
            sort5.quickSort(arr7, 0, 100000-1);
            //sort5.display(arr7, 100000);
        }
        if (size == 50000) {
            sort5.quickSort(arr8, 0, 50000-1);
            //sort5.display(arr8, 50000);
        }
        comparisons = sort5.count;
        cout << "    #Quick-sort-rp comparisons: " << comparisons << endl;
    }



    return 0;
}
