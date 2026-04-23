#include "ArrayMedium.h"
using namespace std;


int main()
{
    ArrayMedium obj;

    // vector<int> A = {4,3,5,2,1};
    // cout << "If the target is 6 .Then does A have two values which add upto 6 : " << obj.twoSum(A,6) << endl;

    vector<int> A = {0,1,0,2,1};
    vector<int>dutchflag = obj.dutchflag(A);
    cout << "0s 1s and 2s : " ;
    obj.display(dutchflag);




}