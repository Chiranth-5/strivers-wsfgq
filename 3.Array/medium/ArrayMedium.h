#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class ArrayMedium
{
    public:
        void display( vector<int>A);
        void swap( int& a, int& b);

        bool twoSum(vector<int>& arr, int target);

        vector<int> dutchflag( vector<int>& A);
        int MajorityElementBoyerVoting( vector<int>A);
        int KadaneAlgorithm( vector<int> A);

        int stockbuySell(vector<int>& prices);

        vector<int> rearrangeBySign(vector<int>& A);
        vector<int> nextPermutation(vector<int>& A);

};