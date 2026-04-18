#include<iostream>
#include <vector>
using namespace std;

//1. count all digits of a number
//2. reverse a number
//3. Palindrome
//4. GCD of two numbers
//5. Check if number is armstrong
//6. Print all divisors
//7. Check prime numbers


class Math
{
    private:

    public:

        // access each digit .while, n%10
        int countDigits( int n);

        // access eacha nd add it to new one
        int revNumber( int n);

        // rev and compare
        bool palindrome( int n);

        // access each and cube it.
        bool amrStrongNumber( int n );

        // check to 1- squre root of n for its divisble number
        void printDivisors( int n);

        // same but only 1 and n shd be divisble value
        bool primeNumber( int n);

        //check from minmum of n, m till 1 . if both are divisble by that number then its hcf.
        int highestCommonFactor( int n, int m);


};
