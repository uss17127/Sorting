#include <iostream>
#include "selectionSort.h"
using namespace std;

/* Sorts array through multiple iterations, finding the lowest number
   from every iteration.
*/
int selectionSort::selectSort(int values[], int numValues) {
    int i, j, minIndex;
    for (i = 0; i < numValues - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < numValues; j++) {
            if(values[j] < values[minIndex]) {
                minIndex = j;
            }
            this->count++;
        }
        swap(&values[minIndex], &values[i]);
    }
    for (int i = 0; i < numValues; i++) {
        cout << values[i] << " ";
    }
    cout << " " << endl;
    return this->count;
}

/* swaps given integers within array */
void selectionSort::swap(int *val, int *min) {

    int temp = *min;
    *min = *val;
    *val = temp;

}
