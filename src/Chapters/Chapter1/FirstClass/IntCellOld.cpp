/**
 * A class for simulating an integer memory cell
 */

class IntCellOld
{
    
    public: 
        IntCellOld() 
        {
            storedValue = 0;
        }

        IntCellOld( int initialValue ) 
        {
            storedValue = initialValue;
        }

        int read()
        {
            return storedValue;
        }
        int write( int newValue )
        {
            storedValue = newValue;
        }


    private: 
        int storedValue;
};