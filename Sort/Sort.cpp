#include "Sort.h"

void Sort::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
}

void Sort::swap( int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


void Sort::selectionSort(vector<int> A)
{
    // 4 3 2 6 1

    // 2 arrays.
    // select the minimum_index value for that position.
    // swap at once.

    // Not apative( wont change its speed if the array is already sorted)
    
    // This loop selects each position from 0.
    for ( int i=0; i<A.size(); i++)
    {

        int mini_index = i ;

        // This loop  finds the minimum index
        for ( int j=i+1; j< A.size(); j++)
        {

            if( A[mini_index] > A[j])
            {
                mini_index =j;
            }
        }

        // swap the value 
        int temp = A[mini_index];
        A[mini_index] = A[i];
        A[i] = temp;
    }

    
    cout << "Values after selection sort " ;
    display(A);
    cout << endl << endl;
}

void Sort::bubbleSort( vector<int> A)
{
    // 4 3 2 6 1

    // compare 2 values and push the max to right.
    // do the above activity for A.size() we will get the sorted array.

    // if there is no values swaped in the inner loop then we can say the array is sorted and stop.


    for( int i=0; i<A.size(); i++)
    {

        int flag =0;
        // this loops compares the values with 1 less value and swaps.
        for ( int j=0; j<A.size()-1; j++)
        {
            
            if (A[j+1] < A[j] )
            {
                swap( A[j], A[j+1]);
                flag ++;
            }

        }

        if( flag!=0)
            break;
    }
    


    cout << "Values after  bubble sort " ;
    display(A);
    cout << endl << endl;
}
 
void Sort::insertionSort(vector<int> A)
{
    // 2 arrays
    
    // insert the value to its correct psostion.

    // loop goes thru each element that needs to be inserted.
    for( int i=0; i<A.size(); i++)
    {

        int  key = A[i];

        int j=i-1;

        // loop makes space for key to be inserted by moving values to the end.
        for( ; j>=0 && A[j]>key; j--)
        {
            A[j+1] = A[j];
        }

        // add the values 
        A[j+1] = key;
    }


    cout << "Values after  insertion sort " ;
    display(A);
    cout << endl << endl;
}


void Sort::merge(vector<int>& A, int start, int mid, int secondStart, int end)
{
    vector<int> B(A.size());
    int i = start;       // Pointer for left half
    int j = secondStart; // Pointer for right half
    int k = start;       // Start filling B at the 'start' index

    while(i <= mid && j <= end)
    {
        if(A[i] <= A[j]) // Use <= for stability
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    // Copy remaining elements of left half
    while(i <= mid)
    {
        B[k++] = A[i++];
    }

    // Copy remaining elements of right half
    while(j <= end)
    {
        B[k++] = A[j++];
    }

    // Copy ONLY the merged part back to A
    for (int index = start; index <= end; index++)
    {
        A[index] = B[index];
    }
}

void Sort::mergeSort( vector<int>& A, int start, int end)
{
    //1. call mergeSort on first half
    //2. call mergeSort on second half
    //3. merge both sorted halfs using merge fucntion.
   
    if( start < end)
    {
        int mid =(start+end)/2;
        
        // Call mergeSorton left half
        mergeSort( A, start, mid);

        // Call mergeSorton right half
        mergeSort( A, mid+1, end);

        // once both the sort is ready. merge this merge logic
        merge( A, start, mid, mid+1, end);
    }


}


void Sort::recursiveBubbleSort(vector<int>A, int numberOfremaningCalls)
{
    // base case
    if (numberOfremaningCalls<0)
    {
        // array already sorted
        return; 
    }

    // write inner loop lofic here.

    numberOfremaningCalls--;

}

void Sort::recursiveInsertionSort(vector<int>A, int numberOfremaningCalls)
{
    // base case
    if (numberOfremaningCalls<0)
    {
        // array already sorted
        return; 
    }

    // write inner loop lofic here.

    numberOfremaningCalls--;

}


void Sort::quickSort( vector<int>A )
{
    // partition each
}

