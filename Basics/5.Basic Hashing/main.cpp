#include "Hash.h"
using namespace std;

int main()
{
    vector<int> A = {1,2,1,3,1};

    Hash obj;
    obj.display(A);

    // obj.vectorHashFrequency(A);

    obj.mapHashFrequency(A);
    
}