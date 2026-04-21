#include <iostream>
#include <vector>
using namespace std;

class ArrayEasy
{
    public:
        void display( vector<int>A);
        void swap( int& a, int& b);
        void reverseInPlace(vector<int>& A, int i, int j);

        int largestElement(vector<int> A);
        int secondLargestElement( vector<int>A);
        void sortArray( vector<int>A);
        bool checkSortArray(vector<int>A);

        int uniqueArray( vector<int>A);

        void leftRotate( vector<int>& A);
        void leftRotate( vector<int>&A, int k);

        void moveAllZerosToEnd( vector<int>& A);

};