#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof


int main( int argc , char **argv )
{
    double a = 0, b = 0, c = 0;
    
    if( argc == 1 )
    {
        std::cin >> a >> b >> c;
    }
    else if( argc == 4 )
    {
        a = std::atof( argv[1] );
        b = std::atof( argv[2] );
        c = std:: atof (argv[3]);
    }
    else
    {
        std::cout << "Incorrect usage!" << std::endl;
        return 1; // Failure Code!
    }

    std::cout << mathematics::heron ( a , b , c ) << std::endl;
    return 0; // Success Code!
}



















































