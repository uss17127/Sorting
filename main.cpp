#include <iostream>
#include <fstream>
#include <string>
#include "selectionSort.h"
#include "mergeSort.h"
#include "heapSort.h"
#include "quickSortFP.h"
#include "quickSortRP.h"
using namespace std;
/* Main class that sorts numbers based off of input file. */
int main(int argc, char *argv[]) {
    int x = 0;
    int vals[10001];
    int numInt;
    string intFile;
    ifstream intF;
    string sortType;
    selectionSort sort1;
    mergeSort sort2;
    heapSort sort3;
    quickSortFP sort4;
    quickSortRP sort5;
    int comparisons = 0;


    if (argc == 2) {
        intFile = argv[1];
        intF.open(intFile, ios::in);
    } else {
        cerr << "Usage: main [intFile]" << endl;
        exit(1);
    }

    // Checks if list file exists with list data
    if (!intF) {
        cerr << "Error: cannot parse int information from file" << endl;
        intF.close();
        exit(1);
    }

    while (intF >> numInt) {
        vals[x] = numInt;
        x++;
    }
    intF.close();


    cout << "selection-sort (s)    merge-sort (m)    heap-sort (h) quick-sort-fp (q)    quick-sort-rp (r)" << endl;
    cout << "Enter the algorithm: " << endl;
    cin >> sortType;

    x++;
    if(sortType.compare("s") == 0) {
        comparisons = sort1.selectSort(vals, x);
        cout << "    #Selection-sort comparisons: "  << comparisons << endl;
    }

    if(sortType.compare("m") == 0) {
        sort2.MergeSort(vals, 0, x-1);
        sort2.display(vals, x);
        comparisons = sort2.count;
        cout << "    #Merge-sort comparisons: "<< comparisons << endl;
    }

    if(sortType.compare("h") == 0) {
        sort3.HeapSort(vals, x);
        sort3.display(vals, x);
        comparisons = sort3.count;
        cout << "    #Heap-sort comparisons: " << comparisons << endl;
    }

    if(sortType.compare("q") == 0) {
        sort4.quickSort(vals, 0, x-1);
        sort4.display(vals, x);
        comparisons = sort4.count;
        cout << "    #Quick-sort-fp comparisons: " << comparisons << endl;
    }

    if(sortType.compare("r") == 0) {
        sort5.quickSort(vals, 0, x-1);
        sort5.display(vals, x);
        comparisons = sort5.count;
        cout << "    #Quick-sort-rp comparisons: " << comparisons << endl;
    }

    return 0;
}
