// List of Sorting algorithms:

// 1. Bubble sort.
// 2. Inserstion Sort.
// 3. Selection Sort.

// 4. Heap Sort.
// 5. Merge Sort.
// 6. Quick Sort.
// 7. Tree Sort.
// 8. Shell Sort.

// 9. Count Sort.
// 10.Bucket Sort.
// 11.Radix Sort.

//Striver covered:

// 1.selction
// 2.Bubble
// 3.insertion
// 4.merge
// 5.Recursive Bubble
// 6.Recursove insertion Sort
// 7.Quick sort.

#include <vector>
#include <iostream>
using namespace std;

class Sort
{

    public:

        void display( vector<int>A);
        void swap( int& a, int& b);
        
        void selectionSort(vector<int>A);
        void bubbleSort(vector<int>A);
        void insertionSort( vector<int>A);


        void merge( vector<int>& A, int startofFirstSortedHalf, int eOFSH , int startofSecondSortedHalf , int eOSH);
        void mergeSort( vector<int>& A, int start, int end);


        void recursiveBubbleSort(vector<int>A, int numberOfremaningCalls);
        void recursiveInsertionSort(vector<int>A, int numberOfremaningCalls);

        int partitioning( vector<int>& A, int low, int high);
        void quickSort( vector<int>& A, int low, int high );


};
