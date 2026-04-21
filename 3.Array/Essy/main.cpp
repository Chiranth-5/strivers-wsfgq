#include "ArrayEasy.h"
using namespace std;


int main()
{
    ArrayEasy obj;
    vector<int> A ={1,2,3,4,5};
    
    // cout << "Largest element : " << obj.largestElement(A)<< endl;

    // cout << "Second Largest element : " << obj.secondLargestElement(A)<< endl;
    // cout << "Sorted Array : ";
    // obj.sortArray(A);

    // cout << "Is the array A sorted : " << obj.checkSortArray(A) << endl;

    // int numberOfUniqueValues = obj.uniqueArray(A);
    // cout << "number of unique values in the array : " << numberOfUniqueValues << endl;

    // obj.display(A);
    // cout << endl;
    // cout << "Rotate array left : " << endl;
    // obj.leftRotate(A);
    // cout << endl;
    
    cout << "Values before rotate : " ;
    obj.display(A);
    
    cout << "Rotate array left  3 time: " << endl;
    obj.leftRotate(A,3);

    vector<int> B ={1,2,3,5,0,5,0,6,3};
    cout << "Values before moving : " ;
    obj.display(B);
    cout << "Values after moving :" << endl;
    obj.moveAllZerosToEnd(B);

}