#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Hash
{
    public:
        void display(vector<int> A);
        void display(map<int,int> A);

        void vectorHashFrequency(vector<int>A);
        void stringHashFrequency();
        void mapHashFrequency(vector<int> A);
        
};