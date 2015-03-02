/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"
#include <stdio.h>
#include <math.h>

/**
 * Returns true if value is in array of n values, else false.
 */

bool binarysearch(int value, int values[], int min, int max)
{
    bool answer = false;
    
    if ( max < min )
    {
        answer = false;
    }
    else
    {
        int midpoint = ((min + max) / 2 );
        if (values[midpoint] < value)
        {
            answer = binarysearch(value, values, (midpoint + 1), max);
        } 
        else if (values[midpoint] > value)
        {
            answer = binarysearch(value, values, min, (midpoint - 1));
        }
        else
            answer = true;        
    }
return answer;    
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // loop through the array
    for (int i = 0; i < n; i++)
    {    
        int min = i;
        // loop through the array looking for the index of the smallest value
    
        for (int j = i+1; j < n; j++)   
        {
            // indentify the index of smallest value
           if (values[j] < values[min])
           min = j;
        }
        if (min != i)
        {
            int swap = values[i];
            values[i] = values[min];
            values[min] = swap;
        }
    }
    return;  
}

