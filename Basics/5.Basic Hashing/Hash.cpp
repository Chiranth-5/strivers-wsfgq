#include "Hash.h"
#include <map>
using namespace std;

void Hash::display(vector<int> A)
{
    cout << "All the values of give vector :" << endl;
    for( int i=0; i<A.size(); i++)
    {
        cout << A[i] <<" " ;
    }
    cout << endl;
}

void Hash::display(map<int,int> A)
{
    //if no key of 0 fund then the entry will be added and then displayes.
    // So use itrator to access {key, value} pair.

    for( auto it = A.begin(); it != A.end(); it++)
    {
        cout << it->first << " " << it->second <<endl;
    }

}

void Hash::vectorHashFrequency(vector<int>A)
{
    
    // given vector A : 1 2 1 3 1 
    // 1.find the frequency of 1 in A.
    // method: loop A .Aompare  each value with A.

    int n = A.size();

    int count=0;

    for( int i=0; i<n; i++)
    {   
        //
        if( A[i] == 1)
        {
            count++;
        }
    }

    cout << " The number of times 1 in the vector A = :" << count;
    cout << endl;


    //2.find frequency of each element count
    //method: access each and element and count the frequency of each element.


    vector<int> frequency(A.size());

    for( int i=0; i<n; i++)
    {
        int value = A[i];
        int frequencyValue=1;

        for( int j=0; j<n; j++)
        {
            if( value == A[j] )
            {
                frequency[i] = frequencyValue++;
            }
        }
    }

    
    cout << " The frequency of all the values in the vector A = : " ;
    display(frequency);

    //2.Can be optimised
    // when accessing each value mark that value s frequecny directly in hasHvactor table.
    // here we need to know the range of numbers else the above method is better interms of space

    vector<int> hashVector(10); //Assuming the range is 10

    // access each value
    for( int i=0; i<n; i++)
    {
        // increase its frequency in hasvector table
        hashVector[A[i]]++;
        
    }

    display(hashVector);


}

void Hash::mapHashFrequency( vector<int> A)
{
    //3.We can use map datastructure to effectively improve the space 
    // key value system

    map<int,int> hashMap;

    for( int i=0; i<A.size(); i++)
    {
        // if no value is present it will add 0 and increase it by default.
        hashMap[A[i]]++;
    }

    cout << "The frequency of all the values in the Given vector = : " << endl; ;
    display(hashMap);


}


