#include <iostream>
// recursive function: f(x) = 2f(x-1) + x^2 
// base case: f(0) = 0

int f(int x) {
    if (x == 0) {
        return 0;
    } else {
        return 2 * f(x - 1) + x ^ 2;
    }
}

int main()
{
    int input [11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int output [11];
    //calculation
    for (int i = 0; i < sizeof(input) / sizeof(input[0]); i ++) {
        output[i] = f(input[i]);
    }
    //printing
    for (int i = 0; i < sizeof(output) / sizeof(output[0]); i++) {
        std::cout << "Input: " << input[i] << " Output: " << output[i] << "\n";
    }
    
    return 0;
}