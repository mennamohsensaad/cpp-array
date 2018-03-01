#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"
  namespace  arrays 
{
void printALL (double *base , int arraySize)
      {
      for (int i=0 ; i< arraySize ; ++i)
        {std::cout<<base[i] <<",";}
      }
double maxArray( double *base, int arraySize )
     {
          double maxarray;
        for (int i=0 ; i< arraySize ;++i)
             {
               maxarray=base[i];
                 if (base[i]< base[i+1])
                 {maxarray=base[i+1];}
             }
        return maxarray ;
     }

double minArray( double *base, int arraySize )
     { double minarray ;
          for (int i=0 ; i< arraySize ;++i)
            {
               minarray=base[i];
              if (base[i]>base[i+1])
               {minarray=base[i+1];}
            }
         return minarray ;
 
     }


double meanArray( double *base , int arraySize )
      { int sum =0 ;
          for (int k=0 ; k< arraySize ; ++k)
             {
              sum= sum+ base[k];
             }
         return sum/arraySize ;
      }


double varianceArray( double *base, int arraySize )
       {
         for ( int j=0 ; j<arraySize ; ++j )
      {
double var = (mathematics :: square  ( meanArray (&base[0], arraySize) -  base [j])     )/ arraySize ;
      }
        } 


int countCharacter( char *basePointer , int size , char query )
{ int count=0;
    for (int i=0 ;i <size ; ++i)

    {
      if ( basePointer [i] == query)  // query is character we need count it 
      {
         count  =count+1 ;
      } 

    }
    return count ;
} 


























}

#endif // ARRAYS_HPP
