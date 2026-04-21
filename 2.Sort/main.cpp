#include "Sort.h"

int main()
{
    Sort obj;

    vector<int> A = {4,3,5,2,1};
    
    cout << "All the sorting problems are solved and tested here" << endl<<endl;

    cout << "Values before selection sort " ;
    obj.display(A);
    cout << endl;
    obj.selectionSort(A);

    // cout << "Values before bubble sort " ;
    // obj.display(A);
    // cout << endl;
    // obj.bubbleSort(A);


    // cout << "Values before insertion sort " ;
    // obj.display(A);
    // cout << endl;
    // obj.insertionSort(A);




    // cout << "Values before merge sort " ;
    // obj.display(A);
    // cout << endl;
    // obj.mergeSort(A,0,4);

    // cout << "Values after merge sort " ;
    // obj.display(A);
    // cout << endl << endl;


    // cout << "Values before Quicksort sort : " ;
    // obj.display(A);
    // cout << endl;
    // obj.quickSort(A,0,4);
    // cout << "Values after Quicksort sort : " ;
    // obj.display(A);
    // cout << endl;

    return 0;

    
}