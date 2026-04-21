#include "Hash.h"
using namespace std;

int main()
{
    vector<int> A = {1,2,1,3,1};

    Hash obj;
    obj.display(A);

    obj.vectorHashFrequency(A);

    obj.mapHashFrequency(A);
    cout << endl << endl;


    string B = "abbabacdef";

    obj.display(B);

    obj.stringHashFrequency(B);
    cout << endl << endl;

    obj.display(A);
    obj.maxAndMinFrequency(A);



    
}