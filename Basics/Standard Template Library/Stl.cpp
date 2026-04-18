#include "Stl.h"
using namespace std;

void Stl::pairDatatype()
{
    //

    pair<int,int> p;
    p  = {1,2};

}

void Stl::displayVector( vector<int> v)
{
    cout << "Display Vector" << endl;
    for( int i=0; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void Stl::vectorContainer()
{
    //single linkedlist

    //push_back(value)
    //insert(location, value)
    //pop_back()
    //size()
    //erase(location)
    //erase( start, end) = range , [start,end)
    //clear()
    //empty()

    //begin()
    //end()


    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    
    displayVector(v);


    cout << "iterator" <<endl;
    vector<int>::iterator it1 = v.begin();
    cout << *it1 << endl;
    it1++;
    cout << "it1++ " << *it1 << endl;

    displayVector(v);


    vector<int>::iterator it2 = v.end();
    it2--;
    cout << "Display v in desecnding order" << endl;
    for ( ; it2 != v.begin() ; it2--)
    {
        cout << *it2 << endl;
    }
    cout << *it2 << endl;

    // vector<int>::iterator it3 = v.rbegin();

    v.erase(v.begin());
    
    displayVector(v);

    //2 3 4
    v.erase( v.begin()+1, v.end()-1); // [start,end)

    displayVector(v);

    v.insert(v.begin(),300);
    displayVector(v);
    cout << v.size() << endl;
    v.pop_back();
    displayVector(v);

    cout << v.empty() << endl; // check empty




}

void Stl::listContainer( )
{
    // double linked list

    // similar to vector gives front operations as well.

    // push_front(value);

    // push_back(value);
    // insert(location, value);
    // pop_back()
    // size()
    // erase(location)
    // erase( start, end) = range , [start,end)

    // begin()
    // end()
    
    
    // insert to front is cheap .
    // because it uses double linkedlist.
    // vector uses single linked list .
    list<int> list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);

    cout << "Display lsit" << endl;
    for( std::list<int>::iterator it  = list.begin(); it!=list.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    list.push_front(10);
    // this is cheap

    cout << "Display lsit" << endl;
    for( std::list<int>::iterator it  = list.begin(); it!=list.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

void Stl::deque()
{
    std::deque<int> deq;
    // similar to vector


}

void Stl::stack()
{

}

void Stl::Queuue()
{

}

void Stl::priorityQueue()
{

}

void Stl::set()
{

}

void Stl::mutliSet()
{
    
}

void Stl::UnorderedSet()
{

}

void Stl::map()
{

}

void Stl::multiMap()
{

}

void Stl::unorderedMap()
{

}

void Stl::extra()
{

}

