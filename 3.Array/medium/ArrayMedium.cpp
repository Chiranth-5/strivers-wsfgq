#include "ArrayMedium.h"

void ArrayMedium::display( vector<int>A)
{   
    for( int i=0; i< A.size(); i++)
    {
        cout << A[i] <<" ";
    }
    cout <<endl;
}

void ArrayMedium::swap( int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool ArrayMedium::twoSum(vector<int>& A, int target)
{
    // Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
    // Output : YES
    // Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

    // Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
    // Output : NO.
    // Explanation: There exist no such two numbers whose sum is equal to the target.
    

    //method 1
    //1. go thru each element
    //2. calculate the remaing value to reach target. check its present in the arrays before this.
    //3. Will end up using hashmap and then add values to has map if not found . 

    // map<int,int> remainingValues;
    // int n = A.size();

    // for( int i=0; i<n; i++)
    // {
    //     int rem = target-A[i];

    //     if( remainingValues.find(rem) != remainingValues.end())
    //     {
    //         //its found.
    //         return true;
    //     }
    //     remainingValues[A[i]] = i;

    // }

    // return false;

    //method 2  
    // 1. sort array
    //2. use two pointeer. one from either side.
    //3. comapre the sum if its less than target move the left one else move right one

    sort(A.begin(),A.end());

    int i=0;
    int j=A.size()-1;

    while(i<j)
    {
        int sum = A[i]+A[j];

        if( target == sum)
        {
            return true;
        }
        else if( target <sum)
        {
            //move tthe left
            i++;

        }
        else
        {
            j--;
        }
    }

    return false;


}

vector<int> ArrayMedium::dutchflag( vector<int>& A)
{
    // Input: nums = [1, 0, 2, 1, 0]
    // Output: [0, 0, 1, 1, 2]
    // Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

    // Input: nums = [0, 0, 1, 1, 1]
    // Output: [0, 0, 1, 1, 1]
    // Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos.


    // method 1:
    // sort algo 
    // On2

    // // method 2:
    // // count the numbers ands then refill the values
    // int n=A.size();
    // int count0 = 0;
    // int count1 = 0;
    // int count2 = 0;
    // for( int i=0; i<n; i++)
    // {
    //     if( A[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if( A[i] == 1)
    //     {
    //         count1++;
    //     }
    //     else 
    //     {
    //         count2++;
    //     }
    // }

    // int i=0;
    // for ( int j=0; j<count0; j++)
    // {
    //     A[i] =0;
    //     i++;
    // }
    // for ( int j=0; j<count1; j++)
    // {
    //     A[i] =1;
    //     i++;
    // }
    // for ( int j=0; j<count2; j++)
    // {
    //     A[i] =2;
    //     i++;
    // }

    // return A;

    //method 3
    //consider three pointers
    // low
    // mid
    // high

    // assume everything till low is 0 and low points to start of middle section 
    // assume everything after high point is 2.
    
   

    int low = 0;
    int high = A.size()-1;
    int mid = 0;

    // now trverse from mid ie point just adter low till high .
    while( mid <= high)
    {
        // we can get three cases 0,1,2
        if( A[mid] == 0)
        {
            //swap low and mid value and moveboth values
            swap(A[low],A[mid]);
            low++;
            mid++;
        }
        else if ( A[mid]==1)
        {
            // remain same. move mid
            mid++;
        }
        else
        {
            // swap mid and high/ Dont move mid we need to check again if its lower or same.
            //move high backwards.
            swap(A[mid],A[high]);
            high--;
        }

    }

    return A;


}

int ArrayMedium::MajorityElementBoyerVoting( vector<int>A)
{
    // nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
    // Output: 7


    // majority element. 
    // pair wise destruction
    // Boyer moore voiting algorithm
    // if all the elemenets apart from the major element took out each major element then still we will have a mojor element remaining at the end.

    int n = A.size();
    int count =0;
    int element =-1;
    for( int i=0; i<n;i++)
    {
        if(count == 0)
        {
            count++;
            element = A[i];
        }
        else if (A[i] == element)
        {
            count ++;
        }
        else 
        {
            count--;
            if( count ==0)
            {
                count++;
                element = A[i];
            }
        }

    }

    return element;
}

int ArrayMedium::KadaneAlgorithm( vector<int> A)
{
    //  input:
    //  nums = [2, 3, 5, -2, 7, -4]  
    //  Output:
    //  15  
    //  Explanation:
    //  The subarray from index 0 to index 4 has the largest sum = 15, 
    //   which is the maximum sum of any contiguous subarray.

    //  kadanceAlgorithm

    // the idea is is it worth calculating the total by adding to old one or to start new fresh one.

    // In this case if the cumulative sum is less than 0 then start fresh.
    // keep track of exitIndex then we can find the complete subarray.


    int maxS=0;
    int sum =0;
    int n= A.size();
    int endIndex = 0;
    int startIndex = 0;

    for( int i=0; i<n; i++)
    {
        sum += A[i];

        if( sum ==0)
        {
            startIndex=i;
        }
        if( sum > maxS)
        {
            maxS = sum ;
            endIndex = i;
        }
        
        if( sum <0)
        {
            //start fresh
            sum = 0;
        }
    }

    return maxS;

}

int ArrayMedium::stockbuySell(vector<int>& A)
{
    // Input: prices = [7,1,5,3,6,4]
    // Output: 5
    // Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
    // Note: That buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

    // Input: prices = [7,6,4,3,1]
    // Output: 0
    // Explanation: In this case, no transactions are done and the max profit = 0.

    // method-1
    // find all the difference of each subarrays and return the maximum one

    // method-2
    // two pointers.
    // let i stop when its right value is greater than that.
    // now start j and calulate all the difference from there till u find the and new A[j which is less then Ai.
    // if you find move i to there and start fresh.

    int i=0;
    int n= A.size();
    int maxP=0;
    int P=0;

    while( i<n)
    {
        if( A[i]<A[i+1])
        {
            // buy
            int j=i+1;

            while( A[j] >A[i])
            {
                //sell
                P= A[j]-A[i];
                maxP = max( maxP,P);
                j++;
            }
            i=j;
        }
        i++;
    }

    return maxP;
}

