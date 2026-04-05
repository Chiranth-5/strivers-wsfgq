#include<iostream>
using namespace std;

// Patterns



void pattern1(int n) 
{   
    //1 .
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    for (int i=0; i<n ; i++)
    {
        cout << "* * * *" << endl;
    }
}

void pattern2(int n)
{
    //*
    //* *
    //* * * 
    //* * * *
    for ( int i=1; i<=n; i++)
    {
        
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout<<endl;

    }
}

void pattern3(int n)
{
    //1
    //1 2
    //1 2 3 
    //1 2 3 4 

    for(int i=1; i<=n; i++)
    {
        for( int j = 1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4( int n )
{
    //1
    //2 2
    //3 3 3 
    //4 4 4 4 

    for ( int i=1 ; i<=n ; i++)
    {
        for( int j=1 ; j<=i; j++)
        {
            cout << i << " " ;
        }
        cout << endl;
    }
}

void pattern5( int n)
{
    //* * *
    //* *
    //*

    for ( int i=n; i>0 ; i--)
    {
        for ( int j=i; j>0 ; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6( int n)
{
    //1 2 3
    //1 2 
    //1

   for( int i=n; i>0; i--)
   {
        for ( int j=1; j<=i; j++)
        {
            cout << j ;
        }
        cout << endl;
   }
}

void pattern7( int n)
{
    //*
    //* * *
    //* * * * *

    // n number of rows
    // 1 , 3 , 5, 7, 9: 2n-1 number elements are printed in each row.

    for ( int i=1; i<=n ; i++)
    {
        int temp = ((2*i) -1);
        for( int j=1; j<=temp; j++)
        {
            cout << "* ";
        } 
        cout << endl;
    }

    
}


 
int main()
{
    pattern1(3);
    cout<<endl;

    pattern2(3);
    cout << endl;

    pattern3(3);
    cout << endl;

    pattern4(4);
    cout << endl;

    pattern5(4);
    cout << endl;

    pattern6(4);
    cout << endl;

    pattern7(3);
    cout << endl;
}