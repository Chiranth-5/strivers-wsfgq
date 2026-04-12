#include"BasicRecursoin.h"

void BasicRecursion::recursionPrintName( string name , int count , int n)
{
    // name = name to be printed.
    // count = current call.
    // n = total number of calls.

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
    if( count == n) 
    {
        return;
    }
    
    // count keeps track of loop
    count++;
    cout << count << " ";
    oneToNForward(count, n);// 1. print later ( 1, 2) , 2. print later (2,2), 3. checkes later returns.

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
    // count = current call number
    // n=2;

    //Base case
    if( count == n)
    {
        return;
    }


    count++; 
    backwardRecursion( name , count, n);

    cout << count;
    cout << name << " ";


 }


// re writing
//  void BasicRecursion::backwardRecursion(string name, int count , int n)
//  {
//     // name =chiranth
//     // count = current call number
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


void BasicRecursion::NToOneBackward(int count , int n)
 {
    
    // count =0
    // n=2;

    // must print 2,1 .

    //Base case
    if( count == n)
    {
        return;
    }


    count++; 
    NToOneBackward(count, n); //1. 1, (1,2) , cout 1.    2. 2 ,(2,2) cout 2 3. return.

    cout << count << " ";

 }

 int sum = 0;

 int BasicRecursion::sumOffirstNNumbers(int count ,int n)
 {  
    // count = current function call number
    // n = total number of calls.

    // count = 0
    // n = 2

    // return 1+2 = 3.

    //  base_case
    if( count == n)
    {
        return 0;;
    }

    count ++; // next function call number.

    int sum=0;
    sum = count+ sumOffirstNNumbers(count,n);
    
    return sum;
 }


// Factorial of a given number
int BasicRecursion::factorialOfGivenNumber( int count, int n)
{
    // count = current function call number
    // n = total number of calls.

    // n = 2 ; 
    // 2 * 1 

    // base case
    if( count == n)
    {
        return 1;
    }

    count++; // current function call number.

    
    int factorial =  count * factorialOfGivenNumber( count , n);

    // factorial =  count * factorial;
    return factorial;
    

}


 //reverse an array
bool BasicRecursion::revAnArray( int count , int n , string rev)
{
    // count = current function call
    // n = total number of calls

    // rev= abc. given 012
    // rev= cba. need 210 ,i can map this to revese of count value.ie count -1

    // base case
    if ( count > n)
    {
        return true;
    }


    count ++; //current call


    //compare
    if( rev[count+1] == rev[n-count])
    {
        revAnArray(count, n, rev);
        return true;
    }
    else 
    {
        return false;
    }


}


// Fibonacci Number
int BasicRecursion::fibonacciNumber( int count , int n)
{
    // count = current function call
    // n = number of function calls

    // n =2
    // function calls

    // fibinacci series is a sum of 2 preceding numbers.
    // n = 2
    // ans: 1+2 = 3
    // n = 3
    // ans: 1+2+3 = 6

    if( count== n)
    {
        return 0;
    }

    count++;

    sum  = fibonacciNumber(count,n) + fibonacciNumber(count-1,n);

    return sum;
    

}

// Fibonacci Number
int BasicRecursion::fibonacciNumber2( int n)
{
    // count = current function call
    // n = number of function calls

    // n =2
    // function calls

    // fibinacci series is a sum of 2 preceding numbers.
    // n = 2
    // ans: 1+2 = 3
    // n = 3
    // ans: 1+2+3 = 6

    if( n<=1)
    {
        return n;
    }


    return fibonacciNumber2(n-1) + fibonacciNumber2(n-2);
    

}

