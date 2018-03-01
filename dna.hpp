#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"


namespace dna 
{
char complementaryBase( char base )
{
    if( base == 'A' )
    {
        return 'T';
    }
    else if( base == 'T' )
    {
        return 'A';
    }
    else if( base == 'C' )
    {
        return 'G';
    }
    else
    {
        return 'C';
    }

}
char * complementarySequence( char *base, int size )  // the idea
// 1-the pointer pass all elements of array still find '/0' which is the end of array (squence of dna)
//2- then start to use switch case of each case and print the bases from the end to fisrt 
{ char original_base , comp_base ,*p_dna=0 ;          
if ( *p_dna == '/0')

{ 
     switch (original_base)
     {
     case 'A' :
             comp_base= 'T';
             break;
     case   'T': 
             comp_base= 'A';
             break;
     case  'C' :
             comp_base= 'G';
             break ;
             
     case  'G' :
             comp_base= 'C';
             break ;
     }
}
while (*p_dna ! = '/0') // use while to not stop pass of elements
{p_dna ++;}
}


char *analyzeDNA (char *base, int size, int &countA, int &countC, int &countG, int &countT )
{
     countA = arrays :: countCharacter( &base[0] ,  size ,  'A');
      countC =arrays :: countCharacter( &base[0] ,  size ,  'C');
     countG = arrays :: countCharacter( &base[0] ,  size ,  'G') ;
      countT = arrays :: countCharacter( &base[0] , size ,  'T');
}

}


#endif // DNA_HPP
