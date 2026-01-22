#include "calculate_sum.h"

// This function adds two integers and returns the result.
// Keeping it in its own function makes the code easier to reuse and test.
int calculate_sum(int a, int b)
{
    // Return the sum of the two values
    return a + b;
}

int main()
{
    // Call the calculate_sum function with example values
    // This is just a simple test to make sure it works
    calculate_sum(4, 3);

    return 0;
}
