#include"BasicRecursoin.h"

void BasicRecursion::recursionPrintName( string name , int count , int n)
{
    // name = name to be printed
    // count = current number of time the print is complted
    // n = total number of counts

    // chiranth
    // 1
    // 4

    //base case
    if( count == n)
    {
        return;
    }

    // print name
    cout << name << " ";
    //print count
    count++;
    //call again
    recursionPrintName( name, count, n);

}

//forward recursion
 void BasicRecursion::oneToNForward(int count, int n)
 {
    
    // count = 0
    // n = 2

    // n numbers printed . n=2
    // 1 2
    // recursion will be called 2 times

    //base case
    if( count == 2)
    {
        return;
    }
    
    // count keeps track of loop
    count++;
    cout << count << " ";
    oneToNForward(count, n);

 }

//rewriting:
//   void BasicRecursion::forwardRecursion(string name, int count, int n)
//  {
//     // name = chiranth
//     // count = 0
//     // int = 2

//     //base case
//     if( count == 2)
//     {
//         return;
//     }

//     cout << name << " ";
//     count++; //1
//     forwardRecursion( name , count, n)
//     {
//         cout << name << " ";
//         count++;//2
//         forwardRecursion( name , count, n)
//         {
//             return;
//         }

//     }

//  }

 void BasicRecursion::backwardRecursion(string name, int count , int n)
 {
    // name =chiranth
    // count =0
    // n=2;

    //Base case
    if( count == n)
    {
        return;
    }


    count++; 
    backwardRecursion( name , count, n);

    cout << name << " ";


 }


// re writing
//  void BasicRecursion::backwardRecursion(string name, int count , int n)
//  {
//     // name =chiranth
//     // count =0
//     // n=2;

//     //Base case
//     if( count == n)
//     {
//         return;
//     }


//     count++; 
//     backwardRecursion( name , count, n)
//     {
//         count++;
//         backwardRecursion( name , count, n)
//         {
//             return;
//         }
//         cout << name;
//     }
    

//     cout << name << " ";


//  }
