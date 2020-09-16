#include "primeNumber.h"

int primeNumber(int n)
{
    if (n>1)                     //proceeds only if number is greater than 1
    {
        if (n==2 || n==3)        //returns 1 for 2 or 3
            return 1;
        else if (n%2==0)         //eliminates even numbers
            return -1;
        else
        {
            /*divides odd numbers less than n to see if there are
            any divisors.
            If there are none, it is prime*/
            for(int i=3;i<n;i+2)
            {
                if(n%i==0)
                    return -1;
                else
                    return 1;
            }
        }
    }
    else
        return 0;
}
