#include "Matrix.h"


void Matrix::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
    cout <<endl;
}

void Matrix::display(vector<vector<int>>& matrix)
{
    
    int row = matrix.size();
    int col = matrix[0].size();

    for( int i=0; i<row; i++)
    {
        for( int j=0; j<col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::setZeroes(vector<vector<int>> matrix)
{
    // Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
    // Output: [[1,0,1],[0,0,0],[1,0,1]]
    // Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

    // Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
    // Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
    // Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0


    // //brute force
    
    // // access each row and column and mark all the values in that row and col as -1.
    // // 2nd pass change the value to 0

    // int row = matrix.size();
    // int col = matrix[0].size();

    // //1st pass
    // for ( int i=0; i<row; i++)
    // {
    //     for ( int j=0; j<col; j++)
    //     {
    //         //check if its 0
    //         if( matrix[i][j] == 0)
    //         {
    //             // mark all its row to -1
    //             for( int k=0; k<col; k++)
    //             {
    //                 if( matrix[i][k] != 0)
    //                 {
    //                     matrix[i][k] = -1;
    //                 }
    //             }

    //             // mark all its =col to -1
    //             for( int k=0; k<col; k++)
    //             {
    //                 if( matrix[k][j] != 0)
    //                 {
    //                     matrix[k][j] = -1;
    //                 }
    //             }

    //         }
    //     }
    // }

    // // //2nd pass
    // // for ( int i=0; i<row; i++)
    // // {
    // //     for ( int j=0; j<col; j++)
    // //     {
    // //         // mark all -1 to 0's
    // //         if( matrix[i][j] == -1)
    // //         {
    // //             matrix[i][j] =0;
    // //         }
    // //     }
    // // }


    // //method-2
    // // mark the values of row and col which need to be upadted to 0.
    // // 1. Add new row and col.
    // // 2. Mark those values .
    // // 3. in second passs mark all the values of that to 0.

    // int row = matrix.size();
    // int col = matrix[0].size();

    // vector<int> colt(col,0);
    // vector<int> rowt(row,0);

    // for ( int i=0; i<row; i++)
    // {
    //     for ( int j=0; j<col; j++)
    //     {
    //         if( matrix[i][j] == 0)
    //         {
    //             rowt[i] = 1;
    //             colt[j] = 1;
    //         }
    //     }
    // }

    // for ( int i=0; i<row; i++)
    // {
    //     for ( int j=0; j<col; j++)
    //     {
    //         if( rowt[i] == 1 || colt[j]==1)
    //         {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // method-3
    // mark the values of row and col which need to be upadted to 0.
    // 1. Add new row and col.
    // 2. Mark those values .
    // 3. in second passs mark all the values of that to 0.

    int row = matrix.size();
    int col = matrix[0].size();

    vector<int> colt(col,0);
    vector<int> rowt(row,0);

    for ( int i=0; i<row; i++)
    {
        for ( int j=0; j<col; j++)
        {
            if( matrix[i][j] == 0)
            {
                rowt[i] = 1;
                colt[j] = 1;
            }
        }
    }

    for ( int i=0; i<row; i++)
    {
        for ( int j=0; j<col; j++)
        {
            if( rowt[i] == 1 || colt[j]==1)
            {
                matrix[i][j] = 0;
            }
        }
    }


    cout << "Matrix after setting zeros :" << endl;
    display(matrix);
    cout << endl;

}

void Matrix::rotateClockwise(vector<vector<int>>& matrix) 
{
    // transpose
    // reverse

    int row = matrix.size();
    int col = matrix[0].size();

    // reach each location and swap it with i andj
    for ( int i=0; i<row; i++)
    {
        for ( int j=0; j<=i; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }   
    }

    // each row reverse the values
    for ( int i=0; i<row; i++)
    {
        reverse( matrix[i].begin(), matrix[i].end());
    }

    cout << "Matrix after 90 degrees change : " << endl;
    display(matrix);
    cout << endl;

}

vector<int> Matrix::spiralOrder(vector<vector<int>>& matrix)
{
    // Input: Matrix[][] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }
    // Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
    // Explanation: The output of matrix in spiral form.

    // Input: Matrix[][] = { { 1, 2, 3 }, { 4, 5, 6 },{ 7, 8, 9 } }
    // Output: 1, 2, 3, 6, 9, 8, 7, 4, 5.
    // Explanation: The output of matrix in spiral form.

    // 1 1 1 
    // 2 2 2 
    // 1 2 3 

    // 1 1 1 2 3 2 1 2 2

    // consider 4 pointers at each corner.

    int row = matrix.size();
    int col = matrix[0].size();

    int top;
    int bottom;
    int left;
    int right;

    //1st row and last row
    if( row !=0)
    {
        top = 0;
        bottom = row-1;
    }
    // 1sr col and last col
    if( col !=0)
    {
        left = 0;
        right = col-1;
    }

    vector<int> ans;
    int n= matrix.size();

    while( top<=bottom && left <=right)
    {   // trvaese all the elements in top row and reduce the top pointer=
        for ( int i=left; i<=right; i++)
        {
            ans.push_back( matrix[top][i]);
        }
        top++;

        // trvaese all the elements from top to bottom
        for ( int i=top; i<=bottom; i++)
        {
            ans.push_back( matrix[i][right]);
        }
        right--;

        // trvaese all the elements from right to left
        for ( int i=right; i>=left; i--)
        {
            ans.push_back( matrix[bottom][i]);
        }
        bottom--;

        // trvaese all the elements from bottom to top
        for ( int i=bottom; i>=top; i--)
        {
            ans.push_back( matrix[i][left]);
        }
        left++;
    }
    

    return ans;

}

