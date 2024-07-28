#include <iostream>
#include "IntCell.h"
int main() 
{
    IntCell m;
    IntCell n = IntCell(10);

    std::cout << "Cell contents Default Constructor: " << m.read() << std::endl;
    m.write( 5 );
    
    std::cout << "Cell contents after set: " << m.read() <<std:: endl;
    std::cout << "Cell contents custom initialised constructor: " << n.read() << std::endl;


    return 0;
}