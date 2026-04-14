#include "Sort.h"

void Sort::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
}


void Sort::selectionSort(vector<int> A)
{
    // 4 3 2 6 1

    // Select each position.
    // find the minimum index value for that position.
    // swap at once.

    // Not apative( wont change its speed if the array is already sorted)
    
    // This loop selects each postion
    for ( int i=0; i<A.size(); i++)
    {

        int mini_index = i ;

        // This loop goes thru each index after i to finfd the minimum value index
        for ( int j=i+1; j< A.size(); j++)
        {

            //check if the value in miniindex is the least else updat3e
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

    
    cout << "Values after sort " ;
    display(A);
    cout << endl;
}



void Sort::bubbleSort( vector<int>A)
{
    // 4 3 2 6 1

    // 

}