CC = g++
CFLAGS = -g

all: main main2
main: main.o selectionSort.o mergeSort.o heapSort.o quickSortFP.o quickSortRP.o
	$(CC) $(CFLAGS) main.cpp selectionSort.cpp mergeSort.cpp heapSort.cpp quickSortFP.cpp quickSortRP.cpp -o main


main: main2.o selectionSort.o mergeSort.o heapSort.o quickSortFP.o quickSortRP.o
	$(CC) $(CFLAGS) main2.cpp selectionSort.cpp mergeSort.cpp heapSort.cpp quickSortFP.cpp quickSortRP.cpp -o main2

$.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
