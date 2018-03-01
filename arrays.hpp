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
          double maxarray= base[0];
        for (int i=1 ; i< arraySize ;++i)
             {
            
                 if (base[i]>maxarray)
                 {maxarray=base[i];}
             }
        return maxarray ;
     }

double minArray( double *base, int arraySize )
     { double minarray= base[0] ;
          for (int i=1 ; i< arraySize ;++i)
            {
    
              if (base[i]<minarray)
               {minarray=base[i];}
            }
         return minarray ;
 
     }


double meanArray( double *base , int arraySize )
      { double sum =0 ;
          for (int k=0 ; k< arraySize ; ++k)
             {
              sum= sum+ base[k];
             }
         return sum/arraySize ;
      }


double varianceArray( double *base, int arraySize )
       {  double sum=0;
         for ( int j=0 ; j<arraySize ; ++j )
      {
 sum =sum + (mathematics :: square  ( meanArray (base, arraySize) -  base [j])     );
      }
      return sum /arraySize ;
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
