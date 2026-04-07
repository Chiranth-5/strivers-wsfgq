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

    //[2, 2, 1]
    //[1, 1, 2]
    //[n-i, n-i, i]

    // second half star decreases.
    // so we cannot map the number of stars printed to i directly.

    int star = 1;
    for ( int i=1; i<=n ; i++)
    {
        // star
        for( int j=1; j<= star; j++)
        {
            cout << "* ";
        }

        //end of line
        if ( star <=n)
        {
            star++;
        }
        else
        {
            star--;
        }
        cout << endl;
    }




    
    
}

void pattern11( int n)
{
    //n=3
    //          [i, 1, 0 ]
    //1         [1, 1,  ]
    //1 1       [2, 2,  ]
    //1 1 1     [3, 3,  ]

    for( int i=1; i<=n; i++)
    {

        //print 1
        //if i is even it starts from 0
        //if i is odd it starts from 1
        int start =  ( i%2 == 0) ? start = 0 : start = 1 ;

        // j runs i times.
        for ( int j=1; j<=i ;j++)
        {
            cout << start << " ";
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    // 1             1
    // 1 2         2 1
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1

    // outer loop runs as many rows are present
    for ( int i=1; i<=n; i++)
    {
        // each row prints number, space , number
        
        // i=3, row, i=3 ,numbers printed will be three
        for ( int j=1; j<=i ; j++)
        {
            cout << j << " ";
        }
        
        // i =1. space = 4  2(n-i)
        // i =2, space = 2
        // i =3, space = 0  2(n-i)
        for ( int j=1; j<= 2*(n-i)  ; j++)
        { 
            cout << "  " ;
        }


        for ( int j=1; j<=i ; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

}

void pattern13( int n)
{
    // 1 
    // 2 3 
    // 4 5 6
    // 7 8 9 10

    // outer loop runs  as many times as number of rows are present.
    for ( int i=1; i<=n; i++ )
    {
        // i =1, number printeed = 1 (1)
        // i =2 , number printed = 2 3 (2)
        // i =3 , number printed = 4 5 6 (3)

        //inner loop prints numbers
        int start = 1;
        for( int j=1; j<=i; j++)
        {
            cout << start << " ";
            start++;
        }

        //end the printing of j line
        cout << endl;

    }
}

void pattern14( int n)
{
    // A 
    // A B  
    // A B C
    // A B C D

    // outer loop runs n times
    for ( int i=1; i<=n; i++)
    {
        // i=1 , A(1)
        // i=2 , A B(2) 
        // i=3 , A B C(3) = i
        
        string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int start=0;
        for ( int j=1; j<=i ; j++)
        {
            cout << s[start] << " ";
            start++;
        }

        // end of the line
        cout << endl;
    }

}

void pattern15( int n)
{
    // A B C 
    // A B  
    // A 

    //outer loop runs n times
    for ( int i=1; i<=n; i++)
    {
        // n=3
        // i=1, 3, A B C
        //   2, 2, A B
        //   3, 1, A

        string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int start=0;
        
        // loop runs till n-i+1
        for ( int j=1; j<=n-i+1; j++)
        {
            cout << s[start] << " ";
            start++;
        }

        // end of each line
        cout << endl;

    }
    
}

void pattern16( int n)
{
    // A 
    // B B  
    // C C C

    int start=0;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // outer loop runs n times
    for ( int i=1; i<=n; i++)
    {
        // i=1, 1, A
        // i=2, 2, B B
        // i=3, 3, C C C 


        //inner loop runs i time
        for ( int j=1; j<=i; j++)
        {
            cout << s[start] << " ";
        }
        // move to next charachter
        start++;

        // End of line
        cout << endl;
    }
    
}

void pattern17( int n)
{
    //     A 
    //   A B A 
    // A B C B A

    //string
    int start=0;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // outer loop runs n times
    for ( int i=1; i<=n; i++)
    {
        //n=3
        // i, space, charachter , space
        // 1, 2, 1, 2
        // 2, 1, 3, 1
        // 3, 0, 5, 0
         
        //space n-i
        for ( int j=1; j<= n-i; j++)
        {
            cout << "  ";
        }

        start = 0;
        //charachter 2i-1
        for ( int j=1; j<=2*i-1; j++)
        {
            cout << s[start] << " ";

            // A B A
            // i=1, A.      1
            // i=2, A B A , 1,2,1
            // i=3,         1,2,3,2,1
            //need to flip
            if( j<= i-1)
            {
                start++;
            }
            else
            {
                start--;
            }
            
        }

        //space n-i
        for ( int j=1; j<= n-i; j++)
        {
            cout << "  ";
        }

        //end of line
        cout << endl;

    }

}

void pattern18( int n)
{
    // C 
    // B C 
    // A B C

    //outer loop runs n times.

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for ( int i=1; i<=n; i++)
    {
        //Inner loop prints 
        // i, charchter, number of charachter.
        // 1, C   (2)     , 1
        // 2, B C   (1)   , 2
        // 3, A B C   (0) , 3

        int start = n-i;
        
        for ( int j=1; j<=i; j++)
        {  
            // each line.
            
            cout << s[start] << " ";
            start++;
        }

        //end of line
        cout << endl;
    }

}

void pattern19( int n)
{
    //* * * * * *
    //* *     * *
    //*         *
    //* *     * *
    //* * * * * *

    //outer loop prints number of rows ie 2n
    for ( int i=1; i<=2*n ; i++)
    {
        //each line prints star , space , space , star.
        // i, star, space , space ,star
        // 1, 3, 0, 0, 3
        // 2, 2, 1, 1, 2
        // 3, 1, 2, 2, 1
        // 4, 
        // 5,
        // 6,
        // i,n-i+1, i-1, i-1, n-i+1

        int newR = i;
        if( newR > n)
        {
          newR = (2*n-i+1);  
        }

        //star
        for ( int j=1; j<= n-newR+1 ; j++)
        {
            cout << "* ";
        }

        //space
        for ( int j=1; j<= newR-1 ; j++)
        {
            cout << "  ";
        }

        //space
        for ( int j=1; j<= newR-1 ; j++)
        {
            cout << "  ";
        }

        //star
        for ( int j=1; j<= n-newR+1 ; j++)
        {
            cout << "* ";
        }

        //end of line
        cout << endl;
    }
}

void pattern20( int n)
{

    //*         *
    //* *     * *
    //* * * * * *
    //* *     * *
    //*         *

    int star = 1;           // initial value, moves by 1
    int space = 2*(n-1);    // initial value, moves by 2
    int rows = (2*n) -1 ; 

    //outer loop prints number of rows 
    for ( int i=1; i<= rows ; i++)
    {
        //each line prints star , space , star.
        // i, star, space , space ,star
        // 1, 1, 4, 1
        // 2, 2, 2, 2
        // 3, 3, 0, 3
        // 4, 
        // 5,
        // 6,
        // i, i , 2(n-i), i

        // second haf cannot be mapped to i. so star and space follows its own pattern.
        // because i always increases.
        // the number of stars decreases by 1 and number of space increases by 2.


        //star
        for ( int j=1; j<= star ; j++)
        {
            cout << "* ";
        }

        //space
        for ( int j=1; j<= space ; j++)
        {
            cout << "  ";
        }

        //star
        for ( int j=1; j<= star ; j++)
        {
            cout << "* ";
        }

        //at line 3 ( ie n) we need to decrese the star and increase the space by 2.
        if ( i < n)
        {
            star++;
            space = space -2;
        }
        else
        {
            star--;
            space = space +2;
        }


        //end of line
        cout << endl;
    }
}

void pattern21( int n)
{


    //* * * * 
    //*     *
    //*     *
    //* * * *

    // outer loop runs n number of times.

    for( int i=1; i<=n; i++)
    {

        //inner lOOP prints values in each loop

        // i , star, space , star
        // 1 , 
        // 2 , 1, 2, 1
        // 3 , 1, 2, 1
        // 4 , 


        //i==1 or n then print n stars
        if ( i==1 || i==n)
        {
            //print n number of stars;
            for ( int j=1; j<=n; j++)
            {
                cout << "* ";
            }
            //endline
            cout << endl;
            continue;

        }

       // star
       cout << "* ";

       //space
       for ( int j=1; j<=n-2; j++)
       {
            cout << "  ";
       }

       // star
       cout << "* ";

       //endline
       cout << endl;


    }

}

void pattern22( int n)
{


    // // 4       4 4 4 4 4    4 
    // // 4 3       3 3 3    3 4
    // // 4 3 2       2    2 3 4
    // // 4 3 2 1          2 3 4
    // // 4 3 2 2 2 3 4
    // // 4 3 3 3 3 3 4
    // // 4 4 4 4 4 4 4 


    // // 4           4
    // // 4 3       3 4
    // // 4 3 2   2 3 4

    // // 4 3 2 1 2 3 4

    // // 4 3 2
    // // 4 3
    // // 4



    // outer loop runs nuns 2n-1 timess

    int number = 1; //i=2, i=4, ,i=5., n=4
    int space = 2*n-3; // 5
    for( int i=1; i<= 2*n -1; i++) // i = [1,7]
    {
        // 4 3 2 1 2 3 4
        if ( i==n)
        {   

            int value = n; //value = 4
            for ( int j=1; j<=n; j++) // 4 times
            {
                cout << value << " "; //4 3 2 1
                value--; //0
            }
            value = 2; 
            for ( int j=1; j<=n-1; j++) // 3 times
            {
                cout << value << " "; //2 3 4
                value++; //5
            }

            number--; //number =2
            space = space+2; //space = 3
            
            cout << endl;

        }
        else
        {
            //first half
            // 4           4
            // 4 3       3 4
            // 4 3 2   2 3 4


            int valueBegin = n; //4
            // print number
            for ( int j=1; j<=number; j++) //number =3
            {
                cout << valueBegin << " "; //4 3 2 
                valueBegin--;//1
            }

            int valueSpace = n-number+1;
            // print space
            for ( int j=1; j<=space; j++) //space =1
            {
                cout << valueSpace<< " "; //2
            }


            // print number
            int valueEnd = n-number+1; //
            
            for ( int j=1; j<=number; j++) //numner =3
            {
                cout << valueEnd << " "; //3 4 
                valueEnd++;
            }

            // // 4 3 2   2 3 4
            // // 4 3       3 4
            // // 4           4 

            if( i < n)
            {
                number++; //number =3
                space = space-2;// space =1
            }
            else
            {
                number--; //number =2
                space = space +2; //space = 3
            }

            // endl line
            cout << endl;


        }

        
    }
    

}
int main()
{
    // pattern1(3);
    // cout<<endl;

    // pattern2(3);
    // cout << endl;

    // pattern3(3);
    // cout << endl;

    // pattern4(4);
    // cout << endl;

    // pattern5(4);
    // cout << endl;

    // pattern6(4);
    // cout << endl;

    // pattern7MyUnderstanding(3);
    // cout << endl;

    // pattern7(3);
    // cout << endl;

    // pattern8(3);
    // cout << endl;

    // pattern9(3);
    // cout << endl;

    // pattern10(3);
    // cout  << endl;

    // pattern11(3);
    // cout << endl;

    // pattern12(3);
    // cout << endl;

    // pattern13(3);
    // cout << endl;

    // pattern14(3);
    // cout << endl;

    // pattern15(3);
    // cout << endl;

    // pattern16(3);
    // cout << endl;


    // pattern17(3);
    // cout << endl;

    // pattern18(3);
    // cout << endl;

    // pattern19(3);
    // cout << endl;

    // pattern20(3);
    // cout << endl;

    // pattern21(4);
    // cout << endl;

    pattern22(4);
    cout << endl;


}