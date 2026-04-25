#include "Matrix.h"
using namespace std;


int main()
{
    Matrix obj;

    // vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    // cout << "Matrix before setting zeros : "<< endl;
    // obj.display(matrix);
    // cout <<endl;
    // obj.setZeroes(matrix);

    // vector<vector<int>> matrix = {{1,1,1},{2,2,2},{1,2,3}};
    // cout << "Matrix before : "<< endl;
    // obj.display(matrix);
    // cout <<endl;
    // obj.rotateClockwise(matrix);

    vector<vector<int>> matrix = {{1,1,1},{2,2,2},{1,2,3}};
    cout << "Matrix before : "<< endl;
    obj.display(matrix);
    cout << endl;
    vector<int> ans = obj.spiralOrder(matrix);
    obj.display(ans);




}