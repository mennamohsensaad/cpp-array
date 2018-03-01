#ifndef ECG_HPP
#define ECG_HPP

#include "arrays.hpp"
namespace ecg 
{
void analyzeECG (double *base , int arraySize , double &mean, double &variance, double &max, double &min )

{ // inside int main ()???
double ecg_mean =  arrays :: meanArray( &base[0] ,  arraySize);
double ecg_variance= arrays :: varianceArray ( &base[0], arraySize);
double ecg_max= arrays :: maxArray( &base[0],  arraySize);
double ecg_min=arrays ::  minArray ( &base[0],  arraySize );
}






















}


#endif // ECG_HPP
