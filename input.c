// write a function which will accept two input paramters x,y and returns x^2 + y^2
#include <stdio.h>


int calculate_sum_of_squares(int x, int y)
 {
    int result = (x * x) + (y * y);
    return result;
}


int main() {
    int num1 = 3;
    int num2 = 4;
    int sum_sq;

    sum_sq = calculate_sum_of_squares(num1, num2);

    printf("For x = %d and y = %d:\n", num1, num2);
    printf("x^2 + y^2 = %d^2 + %d^2 = %d\n", num1, num2, sum_sq);
    
    printf("\nFor x = 5 and y = 10:\n");
    printf("x^2 + y^2 = %d\n", calculate_sum_of_squares(5, 10));

    return 0;
}
