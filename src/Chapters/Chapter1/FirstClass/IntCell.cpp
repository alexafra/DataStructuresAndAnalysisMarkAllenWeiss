/**
 * A class for simulating an integer memory cell
 */

#include "IntCell.h"

/**
 * Construct the IntCell with initialValue
 */

IntCell::IntCell( int initialValue ) : storedValue { initialValue } 
{

}

int IntCell::read() const
{
    return storedValue;
}

void IntCell::write ( int x )
{
    storedValue = x;
}