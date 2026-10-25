#include <stdio.h>

int main(void)
{
    float h1, h2, h3, average;
    float missing_height;

    printf("Enter three known heights: ");
    scanf("%f %f %f", &h1, &h2, &h3);

    printf("Enter the average height: ");
    scanf("%f", &average);

    missing_height = (5 * average - (h1 + h2 + h3)) / 2;

    printf("First missing height: %.2f\n", missing_height);
    printf("Second missing height: %.2f\n", missing_height);

    return 0;
}
