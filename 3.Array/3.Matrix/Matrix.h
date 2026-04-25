#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
    public: 

        void display( vector<int>A);
        void display(vector<vector<int>>& matrix);
        
        void setZeroes(vector<vector<int>> matrix);
        void rotateClockwise(vector<vector<int>>& matrix);
        vector<int> spiralOrder(vector<vector<int>>& matrix);

};