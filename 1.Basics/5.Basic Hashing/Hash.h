#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Hash
{
    public:
        void display(vector<int> A);
        void display(string B);
        void display(map<int,int> A);
        void display(map<char,int> A);

        void vectorHashFrequency(vector<int>A);
        void stringHashFrequency( string B);
        void mapHashFrequency(vector<int> A);

        void maxAndMinFrequency( vector<int> A);
        
};