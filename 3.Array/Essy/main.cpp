#include "ArrayEasy.h"
using namespace std;


int main()
{
    ArrayEasy obj;
    // vector<int> A ={1,2,3,4,5};
    
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
    
    // cout << "Values before rotate : " ;
    // obj.display(A);
    
    // cout << "Rotate array left  3 time: " << endl;
    // obj.leftRotate(A,3);

    // vector<int> B ={1,2,3,5,0,5,0,6,3};
    // cout << "Values before moving : " ;
    // obj.display(B);
    // cout << "Values after moving :" << endl;
    // obj.moveAllZerosToEnd(B);

    // vector<int> A = { 1,2,3,4};
    // vector<int> B = {1,3 ,4,5,6};
    // vector<int> ans;
    // ans = obj.findUnion(A,B);
    // obj.display(ans);


    // vector<int> A = { 7,1,2,3,4,6};
    // int missingNum = obj.missingNum(A);
    // cout << " Missing Number from A : " << missingNum << endl; 


    // vector<int> A = {1,0,1,1,1,0};
    // int MaxConsecutiveOnes = obj.findMaxConsecutiveOnes(A);
    // cout << " Missing Number from A : " << MaxConsecutiveOnes << endl; 

    // vector<int> A = {1,1,2,2,3};
    // int getSingleElement = obj.getSingleElement(A);
    // cout << "Single Element from A : " << getSingleElement << endl; 

    vector<int> A = {1,1,2,2,3};
    int longestSubarray = obj.longestSubarray(A,3);
    cout << "longest Subarray from A : " << longestSubarray << endl;


}