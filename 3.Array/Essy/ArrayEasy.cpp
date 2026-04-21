#include "ArrayEasy.h"
#include <map>
using namespace std;

void ArrayEasy::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
    cout <<endl;
}

void ArrayEasy::swap( int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void ArrayEasy::reverseInPlace(vector<int>& A, int i, int j)
{
    //A = 1 2 3 4
    // i = 0
    // j = 3

    while(i<j)
    {
        swap(A[i],A[j]);
        i++;
        j--;
    }
}

int ArrayEasy::largestElement(vector<int> A)
{
    //largest element of the array a

    //optimal
    // 1. access ech element and compare to find the maximum

    int maxi=0;
    int n = A.size();

    for( int i=0; i<n;i++)
    {
        if( A[i]>maxi)
        {
            maxi=A[i];
        }
    }


    return maxi;
}

int ArrayEasy::secondLargestElement( vector<int> A)
{
    // brute force
    // 1.sort
    // 2. second largest value 
    // sort( A.begin(), A.end());
    int n = A.size();
    // return A[n-2];

    // optimal
    // 1. go thrue eachvalue while doing that stor  the largest and second largest values.

    //only 1 element or 0 element

    if( n==0 || n==1)
    {
        return -1;
    }

    int largest=0;
    int secondLargest=0;

    for( int i=0; i<n; i++)
    {
        if( A[i]>largest )
        {
            //update largest and the second largest
            secondLargest = largest;
            largest = A[i];
        }
        else if( A[i]>secondLargest)
        {
            //update secondlargest
            secondLargest = A[i];
        }
    }

    return secondLargest;
}

void ArrayEasy::sortArray( vector<int>A)
{
    sort( A.begin(), A.end());

    // buble sort
     
    // run theloop n times
    int n = A.size();
    for( int i=0; i<n; i++)
    {
        
        int flag =0;
        for( int j=i+1; j<n ; j++)
        {
            if( A[j]<A[j-1])
            {
                swap( A[j],A[j-1]);
                flag =1;
            }
        }
        
        // no swaps in the inner loop means the array is already sorted
        if( flag ==0)
        {
            break;
        }
    }

    display(A);
}

bool ArrayEasy::checkSortArray(vector<int>A)
{
    // check if the array is sorted.
    // 4 3 2 5 1

    // 1 access each element and then check if its previus element is smaller if not its not sorted in ascending order

    int n = A.size();
    for( int i=1; i<n; i++)
    {
        if( A[i] < A[i-1])
        {
            return false;
        }
    }

    return true;
}

int ArrayEasy::uniqueArray( vector<int>A)
{
    //A    = 4 2 2 1 5


    int j=1;
    int n= A.size();

    for( int i=1; i<n; i++)
    {
        if( A[i] == A[i-1])
        {
            continue;   
        }
        else
        {
            A[j] = A[i]; 
            j++;
        }
    }

    display(A);
    return j;
}

void ArrayEasy::leftRotate( vector<int>&A)
{
    // 1 2 3 4
    // 2 3 4 1

    int value = A[0];

    int n= A.size();

    // move all values of a from positon 2 till to its left
    for( int i=1; i<n; i++)
    {
        A[i-1] = A[i];
    }

    // last one must be the value
    A[n-1] = value;

    display(A);
}

void ArrayEasy::leftRotate( vector<int>& A, int k)
{
    // k =2
    // a = 1,2,3,4
    // a = 3 4 2 1

    // int n = k;

    // // move two places to left
    // while (k>0)
    // {
    //     leftRotate(A);
    //     k--;
    // }

    // rotate array in place 
    //1. revese full array
    //2. reverse k elements a
    //3. reverse n-k elements

    int n = A.size();

    reverseInPlace(A,0, n-1);
    reverseInPlace(A,n-k, n-1);
    reverseInPlace(A,0, n-k-1);

    display(A);


   
}

void ArrayEasy::moveAllZerosToEnd( vector<int>& A)
{
    // A = 1 3 4 0 1 0

    // two pointers
    // let i form the left stop at 0
    // let j from the roght stop at values.
    // let these two values be swaped if i<j

    // repeat this till i<j

    int i=0;
    int j=A.size()-1;

    while( i<j )
    {
        //move if its number
        if( A[i] != 0)
        {
            i++;
        }
        //move if its 0
        if( A[j] == 0)
        {
            j--;
        }

        if( i<j)
        {
            swap(A[i],A[j]);
        }
    }

    display(A);

}

