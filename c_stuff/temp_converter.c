#include <stdio.h>

// algorithm to convert temperature number from celsius to fahrenheit
// C=(5/9) * (F-32)

int main(void)
{
    float f_num;
    printf("Enter fahrenheit: ");
    scanf("%f", &f_num);

    float celsius;
    celsius = 5.0 * (f_num - 32.0) / 9.0;
    printf("Fahrenheit: %f | Celsius: %f\n", f_num, celsius);
    return 0;
}