#include "Matrix.h"
using namespace std;


int main()
{
    Matrix obj;

    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    cout << "Matrix before setting zeros : "<< endl;
    obj.display(matrix);
    cout <<endl;
    obj.setZeroes(matrix);


}