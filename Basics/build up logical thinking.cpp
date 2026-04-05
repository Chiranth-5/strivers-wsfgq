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

void pattern7MyUnderstanding( int n)
{
    //*
    //* * *
    //* * * * *

    // n number of rows
    // 1 , 3 , 5, 7, 9: 2n-1 number elements are printed in each row.

    for ( int i=1; i<=n ; i++)
    {
        int starPrint = ((2*i) -1);
        for( int j=1; j<= starPrint; j++)
        {
            cout << "* ";
        } 
        cout << endl;
    }
    
}

void pattern7( int n)
{
    //    *         [2, 1, 2]
    //  * * *       [1, 3, 1]
    //* * * * *     [0, 5, 0]

    // n number of rows.   i  .  
    
    // total prints in each row :2n-1.  j 
    // space print = n-i
    // starprints  = 2i-1


    for ( int i=1; i<=n ; i++)
    {
        
        //space
        for ( int j=1; j<=n-i; j++)
        {
            cout << "  ";
        }

        //star
        for ( int j=1 ; j<= (2*i-1); j++)
        {
            cout << "* ";
        }

        //space
        for ( int j=1; j<=n-i; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }
    
}

void pattern8( int n)
{
    //* * * * *     [0, 5, 0]
    //  * * *       [1, 3, 1]
    //    *         [2, 1, 0]

    //space = i-1
    //star = 2*(n - (i-1)) -1

    // n number of rows.   i  .
    // 1 , 3 , 5, 7, 9:  
    

    for ( int i=1; i<=n; i++)
    {
        //space
        for ( int j=1; j<= i-1; j++)
        {
            cout << "  ";
        }
        //star
        for ( int j=1; j<= (2*(n-(i-1)) -1); j++)
        {
            cout << "* ";
        }
        //space
        for ( int j=1; j<= i-1; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }

}

void pattern9( int n)
{
    // 3
    //    *         [2, 1, 2]
    //  * * *       [1, 3, 1]
    //* * * * *     [0, 5, 0]
    //* * * * *     [0, 5, 0]
    //  * * *       [1, 3, 1]
    //    *         [2, 1, 0]



    
    //asscending
    //    *         [2, 1, 2]
    //  * * *       [1, 3, 1]
    //* * * * *     [0, 5, 0]

    

    for ( int i=1; i<=n; i++)
    {
        //space = n-i
        for ( int j=1; j<=n-i; j++)
        {
            cout << "  ";
        }

        //star = 2i-1
        for ( int j=1; j<= 2*i-1; j++)
        {
            cout << "* ";
        }

        //space = n-i
        for ( int j=1; j<n-i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }


    //* * * * *     [0, 5, 0]
    //  * * *       [1, 3, 1]
    //    *         [2, 1, 0]

    
    
    for ( int i=1; i<=n; i++)
    {
        //space = i-1
        for ( int j=1; j<= i-1; j++)
        {
            cout << "  ";
        }
        //star = 2*(n - (i-1)) -1
        for ( int j=1; j<= (2*(n-(i-1)) -1); j++)
        {
            cout << "* ";
        }
        //space
        for ( int j=1; j<= i-1; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }

}

void pattern10( int n)
{
    //*
    //* * 
    //* * * 
    //* * 
    //* 

    // n =3
    // i , star , space
    //[1, 1, 2]
    //[2, 2, 1]
    //[3, 3, 0]
    //[2, 2, 1]
    //[1, 1, 2]

    // 2 halfs 
    //[1, 1, 2]
    //[2, 2, 1]
    //[3, 3, 0]
    //[i, i, n-i ]
    for ( int i=1; i<=n ; i++)
    {
        // star
        for( int j=1; j<= i; j++)
        {
            cout << "* ";
        } 

        // //space 
        // for( int j=1; j<=n-i; j++)
        // {
        //     cout << "  ";
        // }

        cout << endl;
    }

    //[2, 2, 1]
    //[1, 1, 2]
    //[n-i, n-i, i]

    for ( int i=1; i<=n; i++)
    {

        //star
        for ( int j=1; j<=n-i; j++)
        {
            cout << "* ";
        }
        // //space
        // for ( int j=1; j<=i; j++)
        // {
        //     cout << "  ";
        // }
        cout << endl;
    }

    
    
}

void pattern11( int n)
{
    //n=3
    //          [i, 1, 0 ]
    //1         [1, 1,  ]
    //1 1       [2, 2,  ]
    //1 1 1 

    for( int i=1; i<=n; i++)
    {

        //print 1
        //if i is even it starts from 0
        //if i is odd it starts from 1



        for ( int j=1; j<=i ;j++)
        {
            int temp = i+j;
            if( temp%2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
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

    pattern7MyUnderstanding(3);
    cout << endl;

    pattern7(3);
    cout << endl;

    pattern8(3);
    cout << endl;

    pattern9(3);
    cout << endl;

    pattern10(3);
    cout  << endl;

    pattern11(3);
    cout << endl;

}