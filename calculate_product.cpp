#ifndef CALCULATE_PRODUCT_H
#define CALCULATE_PRODUCT_H

// This function takes two integers and returns their product.
// It keeps the multiplication logic separate so it can be reused.
int calculate_product(int a, int b)
{
    // Multiply the two values and send the result back
    return a * b;
}

#endif


int main()
{
    // Call the calculate_product function with sample values
    // This demonstrates how the function works
    calculate_product(2, 2);

    return 0;
}
