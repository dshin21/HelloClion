#include <iostream>
#include "gcd.hpp"

int gcd( const int a, const int b ) {
    return ( b == 0 ) ? a : gcd( b, a % b );
}

int main() {
    std::cout << gcd( 33, 22 ) << std::endl;
    return 0;
}