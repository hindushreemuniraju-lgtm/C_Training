#include <stdio.h>

int main() {
    int n = 5; // The number of terms we want to sum
    long long sum_of_products = 0; // Use long long to avoid potential overflow for larger n

    printf("Calculating the sum of the series: ");

    // Loop from the first number of the product (i) to n
    for (int i = 1; i <= n; i++) {
        // The product for each term is i * (i + 1)
        long long product = (long long)i * (i + 1); 
        sum_of_products += product; // Add the product to the total sum
        
        // Print the series for clarity
        printf("(%d * %d)", i, i + 1);
        if (i < n) {
            printf(" + ");
        }
    }

    printf("\n\nThe total sum of the products is: %lld\n", sum_of_products);

    return 0;
}
