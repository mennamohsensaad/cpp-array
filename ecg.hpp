#ifndef ECG_HPP
#define ECG_HPP

#include "arrays.hpp"
namespace ecg 
{
void analyzeECG (double *base , int arraySize , double &mean, double &variance, double &max, double &min )

{ // inside int main ()
 mean =  arrays :: meanArray( base ,  arraySize);
variance= arrays :: varianceArray ( base, arraySize);
 max= arrays :: maxArray( base , arraySize);
 min=arrays ::  minArray ( base,  arraySize );
}

using ECGArray = arrays::DoubleArray ;

struct Statistics 
{
double mean = 0 ;
double variance = 0 ;
double min = 0;
double max = 0;
};



Statistics analyzeECG( ECGArray ecg )
{
    Statistics analysis;

analysis.mean =  arrays :: meanArray( array.base ,  array.size);
    analysis.variance = arrays :: meanArray( array.base ,  array.size);
    analysis.max= arrays :: meanArray( array.base ,  array.size);
    analysis.min= arrays :: meanArray( array.base ,  array.size);
} 

    return analysis;
































}


#endif // ECG_HPP
