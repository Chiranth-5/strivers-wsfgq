#include "Sort.h"

int main()
{
    Sort obj;

    vector<int> A = {4,3,5,2,1};
    

    cout << "All the sorting problems are solved and tested here" << endl<<endl;

    cout << "Values before sort " ;
    obj.display(A);
    cout << endl;

    obj.selectionSort(A);

    
}