#include "BinarySearch1D.h"

void BinarySearch1D::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
    cout <<endl;
}

int BinarySearch1D::binarySearchR(vector<int>& A, int low, int high, int target)
{
    // 1 2 3 4 5
    // t=4
    // low =0,
    // high=4

    // recusrive implementation:



    //base case
    if( low>high)
    {
        //Not found
        return -1;
    }


    int mid = (mid = low + (high - low) / 2);

    if( A[mid] == target)
    {
        return mid;
    }
    else if( A[mid] < target)
    {
        // mid less than target
        // eleminate low to mid values
        low = mid+1;
        return binarySearchR(A,low,high,target);
    }
    else
    {
        // mid value is greater than the target. Meaning right of middel can be eleminated.
        high = mid-1;
        return binarySearchR(A,low,high,target);
    }

}

int BinarySearch1D::binarySearchI(vector<int>& A, int target)
{
    // iterative implementation of binary seaarch
    
    // 1 2 3 4 5
    // t=4


    //calculate low and high
    
    int low = 0;
    int high = A.size()-1;

    while( low<=high)
    {
        //we have valid array tha need to be searched.
        
        //calculate mid
        int mid = low+(high-low) /2;

        //check the value in middle and compare it with the sorted array
        if( A[mid] == target)
        {
            // found
            return mid;
        }
        else if( A[mid]< target)
        {
            //eleminate left
            low = mid+1;
        }
        else
        {
            //elimate right
            high = mid-1;
        }

    }

    return -1;

}


int BinarySearch1D::lowerBound(vector<int> A, int n, int x)
{
    // Example 1:
    // Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
    // Result: 1

    // { 2, 2, 2, 3}
    //ans =0;

    //  same logic as binary search to find the mid value.
    
    // Once found we can elemate the right with no issue.
    // we cannot elimate the left beacuse ther can be same value on the left and we need to find that as our answer


    int low = 0;
    int high = n-1;
    int ans=-1;

    while( low<=high)
    {
        int mid = low + ( high -low) /2;

        if( A[mid] < x)
        {
            //eleminate left
            low =  mid+1;
        }
        else 
        {
            // elimante right but save the index if its same as mid
            // this ensures that the left is searched again for the ans if found thatt will replace as the lower bound.
            ans = mid;
            high = mid-1;
        }
    }

    return ans;


}

int BinarySearch1D::upperBound(vector<int> A, int n, int x)
{
    // Example 1:
    // Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
    // Result: 1

    // { 2, 2, 2, 3}
    // ans = 0;

    //  same logic as binary search to find the mid value.
    
    // eliminate left. But save tthe index. if its found in the right side it will be replaced with the upper bound.
    // eliminate right.
    int low = 0;
    int high = n-1;
    int ans =-1;

    while( low<=high)
    {
        int mid = (low+(high-low)/2);
        

        //10,30,30,30,50,60
        //
        if( A[mid] <= x)
        {
            // eliminate left. 
            // But save tthe index. 
            // if its found in the right side it will be replaced with the upper bound.
            ans = mid;
            low = mid+1;
        }
        else
        {
            // Elimate right.
            high = mid-1;
        }

    }

    return ans;
}

int BinarySearch1D::searchInsert(vector<int> A, int x)
{
    //10 20 30 40 

    // find the position of insert.
    
    // Finish binary serach . the location where the l croses the h. l will be the location we use to insert the new value.

    int low =0;
    int high =A.size()-1;
    int ans;

    while( low <= high)
    {
        int mid = low+(high-low)/2;
        if( A[mid] < x)
        {
            // eliminate left. 
            // But save the index. 
            // if its found in the right side it will be replaced with the upper bound.
            ans = mid;
            low = mid+1;
        }
        else
        {
            // eliminate right
            high = mid -1;
        }
    }

    return ans;
}





