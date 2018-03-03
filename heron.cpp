#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof


int main( int argc , char **argv )
{
    double a = 0, b = 0, c = 0;
    
    mathematics::Triangle t{ 0 , 0 , 0 };
    // for struct

    if( argc == 1 )
    {
        std::cin >> a >> b >> c;
std::cin >> t.a >> t.b >> t.c;
//for sttruct
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
    /*std::cout << mathematics::heron( t ) << std::endl;*/ // sor struct

    return 0; // Success Code!
}



















































