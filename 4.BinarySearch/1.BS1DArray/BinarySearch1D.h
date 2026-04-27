#include <iostream>
#include <vector>
using namespace std;


class BinarySearch1D
{
    
    public:

        void display( vector<int>A);

        int binarySearchR(vector<int>& A, int low, int high, int target);
        int binarySearchI(vector<int>& nums, int target);

        int lowerBound(vector<int> A, int n, int x);
        int upperBound(vector<int> A, int n, int x);

        int searchInsert(vector<int> A, int x) ;
};