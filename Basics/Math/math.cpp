#include "math.h"

int Math::countDigits( int n)
{
    // n =5
    // return 1
    // n = 10 
    // return 2

    int count=0;
    while( n>0)
    {
        count ++;
        
        //moves by 10 numbers . need to track digits
        n =n/10;
    }

    return count;

}

//2. reverse a number
int Math::revNumber( int n)
{
    //reverse a number
    int rev=0;

    while( n>0)
    {
        int d = n%10;
        rev = rev*10 + d;

        n = n/10;
    }

    return rev;

}

//3. Palindrome
bool Math::palindrome( int n)
{
    // n = 121
    // return 1

    // of rev and the value are same

    int rev = revNumber(n);

    if ( n== rev)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

//4. Check if number is armstrong
bool Math::amrStrongNumber( int n )
{   
    // n 371
    // 9 + 49 +1

    // access each digit.

    int initValue=n;
    int sum=0;
    while ( n>0)
    {
        int d = n%10;

        //sum square of each digit
        sum+= d*d*d;

        n=n/10;
    }

    if( sum == initValue)
    {
        return true;
    }

    return false;

}

//5. Print all divisors
void Math::printDivisors( int n)
{
    // n =5
    // 1 , 5
    // n = 24
    // 1, 2, 3, 4, 6, 8, 12
    // 1 * 24
    // 2 * 12
    // 3 * 8
    // 4 * 6
    // numbers on the left will become more than number on right
    // 6 * 4 
    // 8 * 3
    // 12 * 1
    
    // n = 24
    // 1, 2, 3, 4, 6, 8, 12

    // n = 36
    // Square root of 36 is 6.
    // We only need to check numbers from 1 to 6.

    // 1 * 36 = 36
    // 2 * 18 = 36
    // 3 * 12 = 36
    // 4 * 9  = 36
    // 6 * 6  = 36  <-- Square Root (The "Mirror" Point)

    // --- After this point, the factors just swap places ---

    // 9  * 4  = 36  (Already found 4 and 9)
    // 12 * 3  = 36  (Already found 3 and 12)
    // 18 * 2  = 36  (Already found 2 and 18)
    // 36 * 1  = 36  (Already found 1 and 36)

    // Divisors: 1, 2, 3, 4, 6, 9, 12, 18, 36
    



    // all the numbers from 1 till n have to be checked if its dividsble by n
    // all the numbers till half of Sqaure root of n must be cheacked to see if its divisible by it.



    // loop thru each from 1 to n/2
    for ( int i=0; i*i<=n; i++)
    {
        if( n%i == 0)
        {
            cout << i << " " << n/i << " ";
        }
    }

}

//6. Check prime numbers
bool Math::primeNumber( int n)
{
    //n = 5
    // true
    // n = 8
    // false

    // print all divisors .

    //n=5
    // 1 ,5
    // if its just 1 and itself then its a prime number.

    int single=0;
    // loop thru each from 1 to n/2
    for ( int i=1; i*i<=n; i++) 
    {
        if( n%i == 0)
        {
            single = i;
        }
    }

    if( single == 1)
    {
        return true;
    }

    return false;

}

//7. GCD of two numbers
int Math::highestCommonFactor( int n, int m)
{
    // n=6, m=4
    // n = 1, 2, 3, 6
    // m = 1, 2, 4
    // highest common factor is 2.

    // n=28, m=44
    // n = 1, 2, 4, 7, 14, 28
    // m = 1, 2, 4, 11, 22, 44
    // highest common factor is 4

    // n=5, m=16
    // n = 1, 5
    // m = 1, 2, 4, 8, 16
    // highest common factor is 4

    // find all the divisors of each number
    // the maximum common divisrs in it will be the solution

    // check till half of the minimum number

    int minN = min(n,m); // 5, 10

    int hcf=1;

    // why dont we traverse from the minN till 1 .
    // i can break as sooon as i get a value in hcf.
    // my time complexity remains same but i can save some performace.

    //eucladian formula

    for( int i=minN; i>=1; i--)// 1<=5
    {
        if( n%i == 0 && m%i==0)
        {
            hcf = i;
            break;
        }
    }


    return hcf;
}
